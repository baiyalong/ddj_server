using MongoDB.Bson;
using MongoDB.Driver;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Web;

namespace MDM
{
    public static class Database
    {
        static readonly MongoClient client;
        static readonly IMongoDatabase database;
        static Database()
        {
            client = new MongoClient(ConfigurationManager.ConnectionStrings["MongoDBConnection"].ConnectionString);
            database = client.GetDatabase("DDJ");
        }
        public static IMongoCollection<T> GetCollection<T>(string name = null)
        {
            return database.GetCollection<T>(String.IsNullOrEmpty(name) ? typeof(T).Name : name);
        }

    }
}