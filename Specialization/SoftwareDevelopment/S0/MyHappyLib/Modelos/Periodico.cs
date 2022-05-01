using System;
using ISP.Interfaces;

namespace ISP
{

    public class Periodico : IBibliotecaElement
    {
        public string Id { get; set; }
        public string Titulo { get; set; }
        public string Autor { get; set; }

    }
}