using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace MyMvcApp.Models {
    public class OrdenPizza {

        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

         public string OrdenID { get; set; }
        public Orden Orden { get; set; }

        public string PizzaID { get; set; }
        public Pizza Pizza { get; set; }

    
    }
}