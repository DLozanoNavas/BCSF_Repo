// Una interfaz es un contrato que obliga a que una clase cumpla con una serie de reglas.
// Las reglas de una interfaz hacen referencia a los métodos y propiedades que una clase DEBE tener.
// Una interfaz es simplemente la declaració o manifiesto de las propiedades que una clase DEBE tener.
// (No implementa ninguna funcionalidad)

using MiOrganizacion.MiTiendita.Modelos;

namespace MiOrganizacion.MiTiendita.Interfaces
{
    public interface ITienda
    {
        void ImprimirNombreTienda();
        void AgregarProducto(Producto producto);
    }
}

