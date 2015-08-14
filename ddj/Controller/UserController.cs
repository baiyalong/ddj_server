using MDM.Model;
using MongoDB.Bson;
using MongoDB.Driver;
using Nancy;
using Nancy.ModelBinding;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Controller
{
    public class UserController : NancyModule
    {
        private IMongoCollection<UserModel> users = Database.GetCollection<UserModel>();
        public UserController() : base("/api/user")
        {
            // this.RequiresAuthentication();

            Get["/", true] = async (_, t) =>
            {
                return await users.Find(new BsonDocument()).ToListAsync();
            };
            Get["/{id}", true] = async (_, t) =>
            {
                return await users.Find(Builders<UserModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string))).FirstOrDefaultAsync();
            };
            Post["/", true] = async (_, t) =>
            {
                var user = this.Bind<UserModel>();
                var count = await users.CountAsync(Builders<UserModel>.Filter.Eq("UserName", user.UserName));
                if (count != 0)
                {
                    return "用户名已存在！";
                }
                else
                {
                    user.createTime = DateTime.Now;
                    await users.InsertOneAsync(user);
                    return user._id.ToString();
                }
            };
            Put["/{id}", true] = async (_, t) =>
            {
                return await users.UpdateOneAsync(Builders<UserModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string)), Builders<UserModel>.Update.Set("password", this.Bind<UserModel>().password));
            };
            Delete["/{id}", true] = async (_, t) =>
            {
                return await users.DeleteOneAsync(Builders<UserModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string)));

            };
        }
    }
}