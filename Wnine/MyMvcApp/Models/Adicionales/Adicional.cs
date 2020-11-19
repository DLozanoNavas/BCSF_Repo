using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Adicional {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.Identity)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string Titulo { get; set; }
        public float CostoEnPesos { get; set; }
        public int Restantes { get; set; }

        public List<OrdenAdicional> OrdenesAdicional { get; set; }

    }
}