using System;
using TiendaApp.Modelos;

namespace TiendaApp.Moodels.Productos
{
    public class NoPerecedero : Producto {
        public int Lote { get; set; }
        public DateTime FechaFabricacion { get; set; }
    }
    
}