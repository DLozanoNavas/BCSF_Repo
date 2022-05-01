using System;
using System.Collections.Generic;

namespace DRY.Models
{
    public class Manager : Empleado, IManager, IManaged {
        IManager IManaged.Manager { get; set ; }
        public List<IManaged> Empleados { get ; set ; }

        public override void PresentarRango()
        {
            Console.WriteLine("Hola! Soy un Manager");
        }
        public void LeerReporte(){
            Console.WriteLine("**Estoy leyendo el reporte**");
        }

        public override void CalcularSalario(int rank)
        {
            this.Salario = 2000000 * rank;
        }
    }
}