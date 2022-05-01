using System;

namespace MySQL
{

    public class CuidadUsuario
    {
        public int ID { get; set; }


        public int UserID { get; set; }
        public Usuario Usuario { get; set; }


        public string CuidadID { get; set; }
        public Cuidad Cuidad { get; set; }


    }


}