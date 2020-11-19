using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Ingrediente {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string Nombre { get; set; }

        public float RestanteEnKG { get; set; }

        public List<IngredientePizza> IngredientePizza { get; set; }

    }
}