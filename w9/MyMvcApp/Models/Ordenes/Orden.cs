using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Collections.Generic;

namespace MyMvcApp.Models
{
    public class Orden
    {

        [Key, DatabaseGenerated(DatabaseGeneratedOption.None)]
        public string ID { get; set; } = Guid.NewGuid().ToString();
        public bool Despachada { get; set; }
        public int PuestoEnLaCola { get; set; }
        public string UsuarioID { get; set; }
        public Usuario Usuario { get; set; }
        // Marca de tiempo
        public DateTime TimeStamp { get; set; }

        public List<OrdenPizza> OrdenesPizza { get; set; }
        public List<OrdenBebida> OrdenesBebidas { get; set; }
        public List<OrdenAdicional> OrdenesAdicionales { get; set; }


        

    }
}