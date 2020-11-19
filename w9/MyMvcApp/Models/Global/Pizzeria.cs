using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Pizzeria {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string Titulo { get; set; }

        public List<Pago> Pagos { get; set; }
        public List<Menu> Menus { get; set; }
        public List<Orden> Ordenes { get; set; }
    }
}