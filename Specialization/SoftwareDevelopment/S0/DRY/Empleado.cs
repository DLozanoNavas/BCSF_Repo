using System;

namespace DRY.Models
{
    public class Empleado : Persona {

        public decimal Salario { get; set; }
        public Manager Manager { get; set; }

        public virtual void PresentarRango(){
            Console.WriteLine("Hola! Soy un empleado.");
        }

        public virtual void CalcularSalario(int rank){
            this.Salario = 1000000 * rank;
        }

        public virtual void AsignarManager(Manager m ){
            this.Manager = m;
        }


    }



}