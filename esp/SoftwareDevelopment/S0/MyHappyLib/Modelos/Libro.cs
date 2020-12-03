using System;
using ISP.Interfaces;

namespace ISP
{

    public class Libro : IBibliotecaElement, IPrestable
    {
        public string Id { get; set; }
        public string Titulo { get; set; }
        public string Autor { get; set; }
        public bool Prestado { get; set; }
        public string IdUsuarioActual { get; set; }


        public void MarcarComoDevuelto()
        {
            this.Prestado = false;
            this.IdUsuarioActual = String.Empty;
        }

        public void Prestar(string UserID)
        {
            this.Prestado = true;
            this.IdUsuarioActual = UserID;
        }

}

}