using System;
using DRY.Models;

namespace DRY
{
    class Program
    {
        static void Main(string[] args)
        {
            Mensajes.ImprimirMensajeBienvenida2();

            Manager m = new Manager();
            m.CapturarDatos();

            Presidente s = new Presidente();
            s.CapturarDatos();


            s.AsignarManager(m);
            s.CalcularSalario(1);
            Console.WriteLine($"El salario del empleado es {s.Salario}");

            Mensajes.ImprimirMensajeCierre();
            Console.ReadKey();

        }
    }
}
