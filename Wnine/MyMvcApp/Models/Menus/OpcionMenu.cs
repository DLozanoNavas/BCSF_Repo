using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace MyMvcApp.Models {
    // Una opción del menu es un tipo de pizza específico (f(x) - ingredientes y Adicionales)
    public class OpcionMenu {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string MenuID { get; set; }
        public Menu Menu { get; set; }

        public string PizzaID { get; set; }
        public Pizza Pizza { get; set; }

    }


}