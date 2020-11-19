using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Menu {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string PizzeriaID { get; set; }
        public Pizzeria Pizzeria { get; set; }

       public DiaSemana DiaSemana { get; set; }
       
        // Contiene las opciones de pizza
        public List<OpcionMenu> OpcionesMenu { get; set; }

        // Contiene las opciones de bebidas
        public List<Bebida> Bebidas { get; set; }
    }

    public enum DiaSemana{
        Domingo,
        Lunes,
        Martes,
        Miercoles,
        Jueves,
        Viernes,
        Sabado
    }
}