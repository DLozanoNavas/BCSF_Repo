using System;
using TiendaApp.Modelos;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace TiendaApp
{
    class Program
    {

        static void ImprimirMenu(){
            Console.WriteLine("1. Agregar Producto.");
            Console.WriteLine("2. Borrar Producto.");
            Console.WriteLine("3. Mostrar Producto.");
            Console.WriteLine("4. Vender Producto.");
            Console.WriteLine("5. Listar Producto.");
            Console.WriteLine("6. Salir.");
        }

        static int Main(string[] args)
        {
            // Crear una aplicación que reciba el inventario de la tienda y me permita manejar las ventas.

            // Crear Tienda
            Tienda MiTienda = new Tienda();

            MiTienda.Nombre = "Mi tiendita";
            MiTienda.Abierto = true;
            MiTienda.Productos = new List<Producto>();

            string DBFile = @"C:\BCSF\db.txt";

            string Content = File.ReadAllText(DBFile);
            MiTienda.Productos = JsonSerializer.Deserialize<List<Producto>>(Content);
            // Referenciar un archivo

            var RutaCarpeta = @"C:\BCSF\W6\";




            bool existe = Directory.Exists(RutaCarpeta);

            if (existe){
                Console.WriteLine($"La carpeta  {RutaCarpeta} sí existe ");
            }else{
                Console.WriteLine($"La carpeta  {RutaCarpeta} no existe ");
            }

            string[] archivos = Directory.GetDirectories(RutaCarpeta);

            foreach (var archivo in archivos){
                Console.WriteLine(archivo);
            }


             while(true){


                ImprimirMenu();

                string Respuesta = Console.ReadLine();

                // Switch, Case
                
                switch(Respuesta){
                    case "1":
                        MiTienda.AgregarProductoPerecedero();
                        break;
                    case "2":
                        // Borrar Producto
                        Console.Write("Digite el ID del producto a borrar:");
                        MiTienda.BorrarProducto(Int32.Parse(Console.ReadLine()));
                        break;
                    case "3":
                        // Mostrar Producto
                        Console.Write("Digita el ID del producto a mostrar: ");

                        MiTienda.MostrarProducto(Int32.Parse(Console.ReadLine()));
                        break;
                    case "4":
                        // Vender Producto
                        Console.Write("Digita el ID del producto a vender: ");
                        MiTienda.VenderProducto(Int32.Parse(Console.ReadLine()));
                        break;
                    case "5":
                        MiTienda.ImprimirProductos();
                        break;
                    case "6":
                        // Salir

                        File.WriteAllText(DBFile, JsonSerializer.Serialize(MiTienda.Productos) );

                        return 0;
                    default:
                        //Imprimir el menú de nuevo.
                        ImprimirMenu();
                        break;

                }


            }


            return 0;

        }
    }
}
