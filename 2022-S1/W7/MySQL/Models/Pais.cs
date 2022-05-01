using System;
using System.Collections.Generic;

namespace MySQL
{

    public class Pais
    {
        public string ID { get; set; }
        public string Nombre { get; set; }
        public int Habitantes { get; set; }

        // 1 -> 1
        public Bandera Bandera { get; set; }

        // 1 -> *
        public List<Cuidad> Cuidades { get; set; }

        // 1 -> *
        public List<Usuario> Usuarios { get; set; }

    }


}