using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace MyMvcApp.Models {
    public class OrdenBebida {

        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();

        public string OrdenID { get; set; }
        public Orden Orden { get; set; }


        public string BebidaID { get; set; }
        public Bebida Bebida { get; set; }

        

    }
}