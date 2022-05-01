using System;
using System.Collections.Generic;
using TiendaApp.Modelos.Productos;
using TiendaApp.Interfaces;

namespace TiendaApp.Modelos {

    public class Tienda : ITienda {

        public string Nombre { get; set; }
        public bool Abierto { get; set; }

        private float Caja { get; set; }

        public List<Producto> Productos { get; set; }


        public void AgregarProductoPerecedero(){

            // Agregar un producto
            Perecedero p = new Perecedero();
            p.FechaVencimiento = new DateTime(2021, 01, 01);

            Perecedero p2 = new Perecedero(new DateTime(2021, 01, 01));


            Prestobarba pr = new Prestobarba();

            Producto P3 = p2;

 

            

            Console.Write("ID: ");
            p.ID = Int32.Parse(Console.ReadLine());

            Console.Write("Titulo: ");
            p.Titulo = Console.ReadLine();

            Console.Write("Cantidad Restante: ");
            p.Restantes = Int32.Parse(Console.ReadLine());

            Console.Write("Precio: ");
            p.Precio = float.Parse( Console.ReadLine());



            this.Productos.Add(p);
        }

        public void BorrarProducto(int id, int x){
            Producto p = this.Productos.Find(c => c.ID == id);
            if(p == null){
                Console.WriteLine($"El producto {id} no existe.");
            }

            this.Productos.Remove(p);
            Console.WriteLine($"El producto ha sido eliminado.");

        }
        
        public void BorrarProducto(int id){
            Producto p = this.Productos.Find(c => c.ID == id);
            if(p == null){
                Console.WriteLine($"El producto {id} no existe.");
            }

            this.Productos.Remove(p);
            Console.WriteLine($"El producto ha sido eliminado.");

        }

        public void MostrarProducto(int id){

            Producto p = this.Productos.Find(c => c.ID == id);

            if(p != null){
                Console.WriteLine($"\n\nID: {p.ID} \nTitulo: {p.Titulo} \nRestantes: {p.Restantes}\nPrecio: {p.Precio} \n\n");
            } else {
                Console.WriteLine($"El producto {id} no existe");
            }

        }

        public void VenderProducto(int id){
            // Las existencias del producto se van a disminuir y la caja va a aumentar
            Producto p = this.Productos.Find(c => c.ID == id);

            this.Productos.Remove(p);
            p.Restantes--;
            this.Productos.Add(p);

            this.Caja += p.Precio;
            Console.WriteLine($"En la caja hay: {this.Caja}");
        }

        public void ImprimirProductos(){
            foreach(Producto p in this.Productos){
                Console.WriteLine($"\n\nID: {p.ID} \nTitulo: {p.Titulo} \nRestantes: {p.Restantes}\nPrecio: {p.Precio} \n\n");
            }
        }

    }

}