using System;

namespace DRY.Models
{
    public class Staff : Empleado, IManaged {
        public override void PresentarRango()
        {
            Console.WriteLine("Hola! Soy parte del Staff!");
        }
    }

}