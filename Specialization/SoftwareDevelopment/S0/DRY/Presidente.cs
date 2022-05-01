using System;
using System.Collections.Generic;

namespace DRY.Models
{
    public class Presidente : Empleado, IManager {
        public List<IManaged> Empleados { get; set ; }

        public override void AsignarManager(Manager m){
            Console.WriteLine("El presidente no tiene manager.");
        }

        public override void PresentarRango(){
            Console.WriteLine("Hola! Soy el presidente!");
        }
        public override void CalcularSalario(int rank)
        {
            this.Salario = 5000000 * rank;
        }
    }

}