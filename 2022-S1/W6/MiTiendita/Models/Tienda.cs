

using MiOrganizacion.MiTiendita.Interfaces;
using Newtonsoft.Json;

using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace MiOrganizacion.MiTiendita.Modelos
{
    // modificadorAcceso class nombreClase { }

    public class Tienda : ITienda
    // Rep. de un objeto.
    {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int ID { get; set; }


        public string? Email { get; set; }
        public string? Nombre { get; set; }
        public string? Direccion { get; set; }
        public string? Telefono { get; set; }
        public bool Abierto { get; set; }
        public decimal BalanceCaja { get; set; }

        public static string RutaDatos { get; set; } = @"C:\Users\PC\Desktop\Code\W6\MiTiendita\data.json";

        public List<Producto> Productos { get; set; } = new List<Producto>();


        public static Tienda CargarDatos()
        {
            // Cargar datos de la tienda desde un archivo.
            // JSON (JavaScript Object Notation)
            // 1. Leer el contenido del archivo y almacenar en un string.

            // Identificar si el archivo existe y si no existe, vamos a crearlo
            if (!System.IO.File.Exists(RutaDatos))
            {
                // Crear el archivo.
                System.IO.File.Create(RutaDatos);
            }


            string datos = System.IO.File.ReadAllText(RutaDatos);

            if(string.IsNullOrEmpty(datos))
            {
                return new Tienda();
            }

            var resultado = JsonConvert.DeserializeObject<Tienda>(datos); // Asignamos lo que resulte de interpretar el archivo como una tienda.

            return resultado;
        }

        public void GuardarDatos()
        {
            // Guardar datos de la tienda en un archivo.
            // Crear una representación de la información que tienda contiene en este momento.
            string data = JsonConvert.SerializeObject(this);
            Console.WriteLine(data);

            // Guardar la información en un archivo.
            System.IO.File.WriteAllText(RutaDatos, data);
        }


        public void ImprimirNombreTienda()
        {
            Console.WriteLine(Nombre);
        }

        public void AgregarProducto(Producto producto)
        {
            Productos.Add(producto);
        }

        public void ImprimirListaProductos()
        {
            Console.WriteLine("");

            foreach (var producto in Productos)
            {
                Console.WriteLine($"Título del producto: {producto.Title}"); // Interpolación de Strings
                Console.WriteLine($"Stock Actual del producto: {producto.CantidadStock}"); 
                Console.WriteLine($"Precio Actual del producto: {producto.Precio}"); 
                Console.WriteLine("");
                Console.WriteLine("");

            }
        }

        public void CambiarEmail(string _email)
        {
            Email = _email;
        }

        public void ComprarProducto(string SKU)
        {
            // Obtener el producto que el usuario quiere comprar.
            var producto = Productos.Find(x => x.SKU == SKU);
            if(producto is null)
            {
                Console.WriteLine("El producto no existe");
                return;
            }   

            // Si llegamos hasta acá, el producto sí existe.
            // Verificar si hay stock.
            if(producto.CantidadStock > 0)
            {
                // Si hay stock, se lo restamos a la cantidad de stock.
                producto.CantidadStock--;
                // Se agrega el precio del producto al balance de la caja.
                BalanceCaja += producto.Precio;


                Console.WriteLine($"Enhorabuena! Has comprado {producto.Title} por ${producto.Precio}");
            }
            else
            {
                Console.WriteLine("No hay stock del producto");
            }

        }


        public void ImprimirEmailienda()
        {
            Console.WriteLine(Email);
        }


        public static void DecirHola()
        {
            Console.WriteLine("Hola");
        }


    }
    // Todos los objetos se componen de dos cosas. Las cosas que es y las coas que hace.
    // Ej. Bicicleta.
    // Es o tiene: Color, Marca, Modelo, Tamaño, Peso, etc. (Propiedades)
    // Hace: Pedalear, Girar manubrio a la derecha, girar manubrio a la izquierda, etc. (Métodos (FUNCIONES))
}