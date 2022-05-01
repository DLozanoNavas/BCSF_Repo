using DemoWebApp.Models;

using Microsoft.EntityFrameworkCore;

namespace DemoWebApp.Data
{
    public class DataContext : DbContext
    {
		public DataContext(DbContextOptions<DataContext> options) : base(options)
		{
			Database.SetCommandTimeout(9000);
			Console.WriteLine("Database Instance Initialized.");

			//try
			//{
			//    Database.Migrate();
			//}
			//catch (Exception e)
			//{
			//    Log.Error($"There was an error while migrating the Database. Error: {e}");
			//}
		}

		public DbSet<Store> Store { get; set; }
        public DbSet<Product> Product { get; set; }
        public DbSet<User> User { get; set; }
        public DbSet<Order> Order { get; set; }
        public DbSet<OrderLine> OrderLine { get; set; }
    }
}
