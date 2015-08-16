using MongoDB.Bson;
using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class ProjectModel : Base
    {
        public string name { get; set; }
        public DateTime createTime { get; set; }
        public string userName { get; set; }

        public IEnumerable<string> designs { get; set; }
    }
}