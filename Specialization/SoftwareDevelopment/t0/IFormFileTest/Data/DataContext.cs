using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using IFormFileTest.Models;

namespace IFormFileTest.Data
{
    public class DataContext : DbContext
    {
        public DataContext (DbContextOptions<DataContext> options)
            : base(options)
        {
        }

        public DbSet<IFormFileTest.Models.FileUpload> FileUpload { get; set; }
    }
}
