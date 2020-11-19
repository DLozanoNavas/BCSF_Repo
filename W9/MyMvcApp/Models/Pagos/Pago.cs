using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Pago {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public DateTime TimeStamp { get; set; }
        public float MontoPagadoEnPesos { get; set; }

        public string UsuarioID { get; set; }
        public Usuario Usuario { get; set; }

        public List<Orden> Orden { get; set; }

    }
}