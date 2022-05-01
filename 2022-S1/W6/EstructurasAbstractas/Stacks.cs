using System;
using System.Collections.Generic;

namespace EstructurasAbstractas.Stacks {


    public static class StacksDemo{

        public static void EjecutarDemo (){

            Console.WriteLine("Ejecutando Stacks Demo!");

            // Stacks: El último entrar es el primero en salir. LIFO (Last-in, First-out)
            // Push (Agregar frames a un stack)
            // Pop (Sacar Cosas del Stack)
            Stack<string> numeros = new Stack<string>();

            numeros.Push("One");
            numeros.Push("Dos");
            numeros.Push("Tres");
            numeros.Push("Cuatro");

            foreach(string numero in numeros){
                Console.WriteLine(numero);
            }

  
            Console.WriteLine($"El valor que salió fué: {numeros.Pop()}");

            foreach (string numero in numeros)
            {
                Console.WriteLine(numero);
            }


            Console.WriteLine($"El valor que salió fué: {numeros.Pop()}");

            foreach (string numero in numeros)
            {
                Console.WriteLine(numero);
            }

        }
    }

}