using System;
using TiendaApp.Modelos;

namespace TiendaApp.Modelos.Productos
{
    public class Perecedero : Producto {

        public Perecedero()
        {

        }

        public Perecedero(DateTime vencimiento)
        {
            this.FechaVencimiento = vencimiento;
        }

        public DateTime FechaVencimiento { get; set; }

    }
}