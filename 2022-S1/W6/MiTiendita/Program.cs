using System;

using Microsoft.EntityFrameworkCore;

using MiOrganizacion.MiTiendita.Modelos;

using MiTiendita.Data;

namespace MiTiendita 
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var db = new DataContext();


            var chocorramo = db.Producto.Include(p => p.Tienda).Where(c=>c.ID == 1).FirstOrDefault();

            chocorramo.Title = "Chocorramo";

            db.Remove(chocorramo);
            db.SaveChanges();

            Console.WriteLine(chocorramo.Tienda.Nombre);

            // var tienda = db.Tienda.Include(c=>c.Productos).Where(c => c.ID == 0).FirstOrDefault();


            // Console.WriteLine(tienda.Nombre);

            // foreach (var producto in tienda.Productos)
            // {
            //     Console.WriteLine($"Tienda: {tienda.Nombre}. SKU: {producto.SKU}. Stock: {producto.CantidadStock}");
            // }
            //var prod = new Producto();

            //prod.ID = 1;
            //prod.TiendaID = 0;
            //prod.SKU = "CHOCO";
            //prod.CantidadStock = 12;
            //prod.Precio = 2000;


            //db.Producto.Add(prod);
            //db.SaveChanges();

            //var prod2 = new Producto();

            //prod2.ID = 2;
            //prod2.TiendaID = 0;
            //prod2.SKU = "POLA";
            //prod2.CantidadStock = 30;
            //prod2.Precio = 2500;


            //db.Producto.Add(prod2);
            //db.SaveChanges();

            //var tiendas = db.Tienda.ToList();

            //foreach (var tienda in tiendas)
            //{
            //    Console.WriteLine($"Nombre de la tienda: {tienda.Nombre}");
            //}

            //// Crear una nueva tienda
            //var tiendita = new Tienda();

            //tiendita.ID = 0;
            //tiendita.Nombre = "Mi Tiendita";
            //tiendita.Abierto = true;
            //tiendita.BalanceCaja = 0.0m;
            //tiendita.Email = "a@u.com";

            //// Guardar la tiendita en la base de datos
            //db.Tienda.Add(tiendita);
            //db.SaveChanges();

            //Console.WriteLine("Tiendita ha sido guardada");
        }

        static void OldMain(string[] args)
        {

                // 1. Crear la estructura de la información con la que queremos trabajar. (Modelos de la información (Clases))

                // 2. Crear una instancia de la clase. (Objeto)
                var nuevaTienda = new Tienda();

            nuevaTienda.Nombre = "Mi Tiendita";
            nuevaTienda.Abierto = true;
            nuevaTienda.BalanceCaja = 0.0m;
            nuevaTienda.Email = "a@u.com";

            nuevaTienda = Tienda.CargarDatos();

            // Entrar en el loop de la aplicación.

            // Declarar un ciclo que haga mantener la aplicación abierta.


            while(true) // Siempre va a ser cierto
            {
                Console.WriteLine("");
                Console.WriteLine("");
                ImprimirMenu();

                var opcion = Console.ReadLine();

                switch (opcion)
                {
                    case "0":
                        // Imprimir el nombre de la tienda.
                        nuevaTienda.ImprimirNombreTienda();
                        break;
                            
                    case "1":
                        // Imprimir el nombre de la tienda.
                        nuevaTienda.ImprimirNombreTienda();
                        break;
                    case "2":
                        Console.WriteLine("");
                        Console.WriteLine("");
                        // Agregar un producto a la tienda.
                        var nuevoProducto = new Producto();

                        Console.WriteLine("Ingrese el SKU del producto");
                        nuevoProducto.SKU = Console.ReadLine();

                        Console.WriteLine("Ingrese el nombre del producto");
                        nuevoProducto.Title = Console.ReadLine();

                        Console.WriteLine("Ingrese el precio del producto");
                        nuevoProducto.Precio = decimal.Parse(Console.ReadLine());

                        Console.WriteLine("Ingrese la cantidad de stock del producto");
                        nuevoProducto.CantidadStock = int.Parse(Console.ReadLine());

                        nuevaTienda.AgregarProducto(nuevoProducto);
                        Console.WriteLine("");
                        Console.WriteLine("");
                        break;
                    case "3":
                        // Imprimir la lista de productos.
                        nuevaTienda.ImprimirListaProductos();
                        break;
                    case "4":
                        Console.WriteLine("");
                        Console.WriteLine("");
                        // Cambiar el email de la tienda.
                        Console.WriteLine("Ingrese el nuevo email de la tienda");
                        nuevaTienda.CambiarEmail(Console.ReadLine());
                        Console.WriteLine("");
                        Console.WriteLine("");
                        break;
                    case "5":
                        // Imprimir el email de la tienda.
                        nuevaTienda.ImprimirEmailienda();
                        break;
                    case "6":
                        Console.WriteLine("");
                        Console.WriteLine("");
                        // Impromir Balance Caja
                        Console.WriteLine("El balance de la caja es: " + nuevaTienda.BalanceCaja);  

                        Console.WriteLine("");
                        Console.WriteLine("");


                       break;
                    case "7":
                        Console.WriteLine("");
                        Console.WriteLine("");
                        // Comprar Producto
                        Console.WriteLine("Ingrese el SKU del producto que desea comprar");
                        string sku = Console.ReadLine();

                        nuevaTienda.ComprarProducto(sku);

                        Console.WriteLine("");
                        Console.WriteLine("");

                        break;
                    case "8":

                        nuevaTienda.GuardarDatos();

                        // Salir de la aplicación.
                        Environment.Exit(0);
                        break;
                    default:
                        Console.WriteLine("Opción inválida");
                        break;
                }

            }
        }


        // Crear un método que imprima el menú de la aplicación.

        // modificadorAcceso tipoDeRetorno nombreDelMetodo(parametros)

        static void ImprimirMenu()
        {
            Console.WriteLine("1. Imprimir Nombre de la tienda");
            Console.WriteLine("2. Agregar Productos");
            Console.WriteLine("3. Listar producto");
            Console.WriteLine("4. Cambiar email de la tienda");
            Console.WriteLine("5. Imprimir el Email de la tienda");
            Console.WriteLine("6. Impromir Balance Caja");
            Console.WriteLine("7. Comprar Producto");
            Console.WriteLine("8. Salir");
            Console.WriteLine("Ingrese una opción: ");
        }


    }
}