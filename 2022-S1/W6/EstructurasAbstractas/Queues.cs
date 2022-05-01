using System;
using System.Collections.Generic;

namespace EstructurasAbstractas.Queues{

    static class QueuesDemo {

        static public void EjecutarDemo(){
            // QUEUES: Estuctura de datos. Primero en entrar - Primero en salir.
            // (Colas)
            // Enqueue
            // Dequeue 
            Queue<string> numeros = new Queue<string>();

            numeros.Enqueue("Uno");
            numeros.Enqueue("Dos");
            numeros.Enqueue("Tres");

            foreach (string numero in numeros)
            {
                Console.WriteLine(numero);
            }

            var p = numeros.Dequeue();
            Console.WriteLine("El valor que salió fue: {0}", p);

            foreach (string numero in numeros)
            {
                Console.WriteLine(numero);
            }

            p = numeros.Dequeue();
            Console.WriteLine($"El segundo valor que salió fue: {p}");
        }

    }

}