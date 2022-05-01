using System;

namespace TiendaApp.Interfaces{

    public interface ITienda{
        void AgregarProductoPerecedero();
        void BorrarProducto(int id);
        void BorrarProducto(int id, int x);
        void MostrarProducto(int id);
        void VenderProducto(int id);
        void ImprimirProductos();

    }

}