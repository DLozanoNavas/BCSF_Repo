using Microsoft.EntityFrameworkCore;

using MiOrganizacion.MiTiendita.Modelos;

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiTiendita.Data
{
    public class DataContext : DbContext
    {
        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            base.OnConfiguring(optionsBuilder);

            string connectionString = $"Server=localhost; Port=3306; Database=test; Uid=itfenixalliance; Pwd=C6@6N?2R!sMr=2Ve; SslMode=Preferred;Convert Zero Datetime=True";

            optionsBuilder.UseMySql(connectionString, ServerVersion.AutoDetect(connectionString));

        }


        public DbSet<Tienda> Tienda { get; set; }
        public DbSet<Producto> Producto { get; set; }

    }
}
