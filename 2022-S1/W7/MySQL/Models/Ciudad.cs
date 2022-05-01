using System;
using System.Collections.Generic;

namespace MySQL{

    public class Cuidad{

        public string ID { get; set; }

        public string Nombre { get; set; }

        public string PaisID { get; set; }
        public Pais Pais { get; set; }


        // * -> *
        public List<CuidadUsuario> CuidadesUsuario { get; set; }

    }


}