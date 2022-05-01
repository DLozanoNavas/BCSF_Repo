using System;

namespace ISP.Interfaces{
    public interface IPrestable {
        public bool Prestado { get; set; }
        public string IdUsuarioActual { get; set; }
        public void MarcarComoDevuelto();
        public void Prestar(string UserID);
    }
}