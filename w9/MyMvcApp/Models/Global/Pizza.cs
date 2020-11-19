using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Pizza {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();
        public string Titulo { get; set; }
        public float CostoEnPesos { get; set; }


        public List<OrdenPizza> OrdenesPizza { get; set; }
        public List<OpcionMenu> OpcionesMenu { get; set; }
        public List<IngredientePizza> IngredientesPizza { get; set; }

    }
}