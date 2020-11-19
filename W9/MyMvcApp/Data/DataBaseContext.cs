using System;
using Microsoft.EntityFrameworkCore;
using MyMvcApp.Models;

namespace MyMvcApp.Data {

    public class DataBaseContext : DbContext
    {
        public DataBaseContext(DbContextOptions<DataBaseContext> options) : base(options){
            Database.SetCommandTimeout(9000);
        }
        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {

        }


         public DbSet<Usuario> Usuarios { get; set; }
         public DbSet<Adicional> Adicionales { get; set; }
         public DbSet<Bebida> Bebidas { get; set; }
         public DbSet<Cerveza> Cervezas { get; set; }
         public DbSet<Gaseosa> Gaseosas { get; set; }
         public DbSet<Jugo> Jugos { get; set; }
         public DbSet<Vino> Vinos { get; set; }
         public DbSet<Pizza> Pizzas { get; set; }
         public DbSet<Pizzeria> Pizzerias { get; set; }
         public DbSet<Ingrediente> Ingredientes { get; set; }
         public DbSet<Menu> Menus { get; set; }
         public DbSet<OpcionMenu> OpcionesMenu { get; set; }
         public DbSet<Orden> Ordenes { get; set; }
         public DbSet<OrdenAdicional> OrdenesAdicionales { get; set; }
         public DbSet<OrdenPizza> OrdenesPizzas { get; set; }
         public DbSet<OrdenBebida> OrdenesBebidas { get; set; }
         public DbSet<Pago> Pagos { get; set; }
         public DbSet<IngredientePizza> IngredientePizza { get; set; }
    }


}