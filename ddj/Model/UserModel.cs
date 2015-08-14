using MongoDB.Bson;
using Nancy.Security;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class UserModel : Base, IUserIdentity
    {
        public string UserName { get; set; }
        public string password { get; set; }
        public IEnumerable<string> Claims { get; set; }
        public DateTime createTime { get; set; }
        public BsonArray projects { get; set; }

    }
}