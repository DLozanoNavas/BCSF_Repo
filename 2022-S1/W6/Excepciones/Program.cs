using System;

namespace Excepciones
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Inicio del programa");

            try{


                Persona p = new Persona();
                Console.WriteLine($"El nombre de la persona es: {p.Cedula.NumeroDeCedula}");
           
            } catch (System.NullReferenceException ex)  {
                Console.WriteLine($"Excepción manejada correctamente: Error: {ex.ToString()}");
            }


            Console.WriteLine("Fin del programa");
        }
    }
}
