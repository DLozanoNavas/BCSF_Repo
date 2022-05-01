using Microsoft.EntityFrameworkCore;

namespace MySQL.Data{

    public class MySQLContext : DbContext {

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            base.OnConfiguring(optionsBuilder);
            optionsBuilder.UseMySql("Server=localhost;Port=3306;Database=w7;Uid=boomlabs;Pwd=?SRvFap8+VGLTAAe;");
        }

        public DbSet<Pais> Paises { get; set; }
        public DbSet<Bandera> Banderas { get; set; }
        public DbSet<Cuidad> Cuidades { get; set; }
        public DbSet<Usuario> Usuarios { get; set; }
        public DbSet<CuidadUsuario> CuidadesUsuarios { get; set; }

    }

}