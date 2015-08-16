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
    public class ProjectController : NancyModule
    {
        private IMongoCollection<ProjectModel> projects = Database.GetCollection<ProjectModel>();
        public ProjectController() : base("/api/project")
        {
            // this.RequiresAuthentication();

            Get["/", true] = async (_, t) =>
            {
                return await projects.Find(new BsonDocument()).Project<ProjectModel>(Builders<ProjectModel>.Projection.Exclude("designs")).ToListAsync();
            };
            Get["/{id}", true] = async (_, t) =>
            {
                return await projects.Find(Builders<ProjectModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string))).FirstOrDefaultAsync();
            };
            Post["/", true] = async (_, t) =>
            {
                var project = this.Bind<ProjectModel>();
                project.createTime = DateTime.Now;
                await projects.InsertOneAsync(project);
                return project._id.ToString();
            };
            Put["/{id}", true] = async (_, t) =>
            {
                return await projects.UpdateOneAsync(Builders<ProjectModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string)), Builders<ProjectModel>.Update.Set("name", this.Bind<ProjectModel>().name).Set("designs", this.Bind<ProjectModel>().designs));
            };
            Delete["/{id}", true] = async (_, t) =>
            {
                return await projects.DeleteOneAsync(Builders<ProjectModel>.Filter.Eq("_id", new ObjectId(_.id.Value as string)));
            };
        }
    }
}