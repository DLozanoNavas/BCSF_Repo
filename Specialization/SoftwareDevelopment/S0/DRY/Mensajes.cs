using System;

namespace DRY.Models {

    public class Mensajes {

        public static void ImprimirMensajeBienvenida2(){
            Console.WriteLine("Bienvenid@ a la NUEVA app.");
        }
        public static void ImprimirMensajeBienvenida(){
            Console.WriteLine("Bienvenid@ a la app.");
        }
        public static void ImprimirMensajeCierre(){
            Console.WriteLine("Presiona enter para cerrar");
        }
        public static void ImprimirMensajePropiedadFaltante(string propiedad){
            Console.WriteLine($"El {propiedad} del usuario no fue ingresado");
        }
        public static void ImprimirMensajeSolicitudPropiedad(string propiedad){
            Console.WriteLine($"Digita el {propiedad} del usuario.");
        }

    }

}