using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models {
    public class Bebida {
        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();
        public string Type { get; set; }
        public string Titulo { get; set; }
        public int MiliLitros { get; set; }
        public float CostoEnPesos { get; set; }
        public virtual bool Carbonatada { get; set; }
        public virtual float GradosAlcohol { get; set; } = 0.0f;
        public string MenuID { get; set; }
        public Menu Menu { get; set; }

        public List<OrdenBebida> OrdenesBebida { get; set; }

    }
}