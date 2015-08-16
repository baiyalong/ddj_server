using MongoDB.Bson;
using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class DesignModel
    {
        public string title { get; set; }
        public string content { get; set; }
    }
}