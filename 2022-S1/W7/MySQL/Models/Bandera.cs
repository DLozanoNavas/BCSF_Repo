using System;
using Microsoft.EntityFrameworkCore;
using System.ComponentModel.DataAnnotations.Schema;

namespace MySQL{

    public class Bandera{
        public int ID { get; set; }
        public string URL_Bandera { get; set; }

        // 1 -> 1
        public string PaisID { get; set; }
        [ForeignKey("PaisID")]
        public Pais Pais { get; set; }

    }


}