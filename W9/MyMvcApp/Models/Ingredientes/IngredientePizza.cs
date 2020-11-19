using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace MyMvcApp.Models {
    public class IngredientePizza {

        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string PizzaID { get; set; }
        public Pizza Pizza { get; set; }


        public string IngredienteID { get; set; }
        public Ingrediente Ingrediente { get; set; }

    }
}