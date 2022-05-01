using System;
using Animales;
using Boomlabs.Ejemplo.Edificios;
using System.Collections.Generic;
using Boomlabs.MyConsoleApp.Cuidadores;
namespace Boomlabs.MyConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            // new == malloc(sizeof(Perrito));
            Perrito p = new Perrito();

            p.Nombre = "Lucas";
            p.Owner = "Daniel";


            Perrera perrera = new Perrera();

            perrera.perritos = new List<Perrito>();

            perrera.perritos.Add(p);

            perrera.BanarPerritos();


            Cuidador.Saludar();


            Console.WriteLine($"Lucas tiene {p.Patas} Patas");
            Console.WriteLine($"Lucas tiene {p.Ojos} Ojos");

        }
    }
}
