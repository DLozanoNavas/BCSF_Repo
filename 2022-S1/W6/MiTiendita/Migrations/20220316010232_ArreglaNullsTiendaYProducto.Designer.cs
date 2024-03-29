﻿// <auto-generated />
using MiTiendita.Data;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Migrations;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;

#nullable disable

namespace MiTiendita.Migrations
{
    [DbContext(typeof(DataContext))]
    [Migration("20220316010232_ArreglaNullsTiendaYProducto")]
    partial class ArreglaNullsTiendaYProducto
    {
        protected override void BuildTargetModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder.HasAnnotation("ProductVersion", "6.0.3");

            modelBuilder.Entity("MiOrganizacion.MiTiendita.Modelos.Producto", b =>
                {
                    b.Property<int>("ID")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("INTEGER");

                    b.Property<int>("CantidadStock")
                        .HasColumnType("INTEGER");

                    b.Property<decimal>("Precio")
                        .HasColumnType("TEXT");

                    b.Property<string>("SKU")
                        .HasColumnType("TEXT");

                    b.Property<int>("TiendaID")
                        .HasColumnType("INTEGER");

                    b.Property<string>("Title")
                        .HasColumnType("TEXT");

                    b.HasKey("ID");

                    b.HasIndex("TiendaID");

                    b.ToTable("Producto");
                });

            modelBuilder.Entity("MiOrganizacion.MiTiendita.Modelos.Tienda", b =>
                {
                    b.Property<int>("ID")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("INTEGER");

                    b.Property<bool>("Abierto")
                        .HasColumnType("INTEGER");

                    b.Property<decimal>("BalanceCaja")
                        .HasColumnType("TEXT");

                    b.Property<string>("Direccion")
                        .HasColumnType("TEXT");

                    b.Property<string>("Email")
                        .HasColumnType("TEXT");

                    b.Property<string>("Nombre")
                        .HasColumnType("TEXT");

                    b.Property<string>("Telefono")
                        .HasColumnType("TEXT");

                    b.HasKey("ID");

                    b.ToTable("Tienda");
                });

            modelBuilder.Entity("MiOrganizacion.MiTiendita.Modelos.Producto", b =>
                {
                    b.HasOne("MiOrganizacion.MiTiendita.Modelos.Tienda", "Tienda")
                        .WithMany("Productos")
                        .HasForeignKey("TiendaID")
                        .OnDelete(DeleteBehavior.Cascade)
                        .IsRequired();

                    b.Navigation("Tienda");
                });

            modelBuilder.Entity("MiOrganizacion.MiTiendita.Modelos.Tienda", b =>
                {
                    b.Navigation("Productos");
                });
#pragma warning restore 612, 618
        }
    }
}
