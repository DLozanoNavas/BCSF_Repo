using System;
using ISP.Interfaces;

namespace ISP
{

    public class DVD : IBibliotecaElement, IPrestable, IDVD
    {
        public string Id { get; set; }
        public string Titulo { get; set; }
        public string Autor { get; set; }
        public bool Prestado { get; set; }
        public string IdUsuarioActual { get; set; }
        public int DuracionMunutos { get; set; }


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