using System;
using System.Collections.Generic;

namespace MySQL
{

    public class Usuario
    {
        public int ID { get; set; }

        public string Nombre { get; set; }

        public string Email { get; set; }



        // 1 -> *
        public string PaisID { get; set; }
        public Pais Pais { get; set; }


        // * -> *
        public List<CuidadUsuario> CuidadesUsuario { get; set; }

    }


}