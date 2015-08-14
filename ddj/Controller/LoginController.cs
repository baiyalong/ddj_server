using MDM.Model;
using MongoDB.Bson;
using MongoDB.Driver;
using Nancy;
using Nancy.Authentication.Token;
using Nancy.ModelBinding;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Web;

namespace MDM.Controller
{
    public class LoginController : NancyModule
    {
        private IMongoCollection<UserModel> users = Database.GetCollection<UserModel>();
        public LoginController(ITokenizer tokenizer) : base("/api")
        {
            Post["/login", true] = async (_, t) =>
             {
                 var u = this.Bind<UserModel>();

                 var doc = await users.Find(Builders<UserModel>.Filter.Eq("UserName", u.UserName)).FirstOrDefaultAsync();
                 if (doc == null)
                 {
                     return "用户名不存在";
                 }
                 else if (u.password != doc.password)
                 {
                     return "密码错误！";
                 }

                 doc.Claims = new List<string>() { };
                 return tokenizer.Tokenize(doc, Context);

             };
            Delete["/logout"] = _ =>
            {
                //delete token


                return 200;
            };
        }
    }
}