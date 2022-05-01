using System;
using ISP.Interfaces;

namespace ISP{

    public class Enciclopedia: IBibliotecaElement {
        // NO SE PRESTAN (SE PUEDEN CONSULTAR EN SITIO)
        public string Id { get; set; }
        public string Titulo { get; set; }
        public string Autor { get; set; }
    }

}