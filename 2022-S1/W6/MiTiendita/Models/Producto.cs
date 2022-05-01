
using System.ComponentModel.DataAnnotations;

namespace MiOrganizacion.MiTiendita.Modelos
{
    public class Producto
    {
        [Key]
        public int ID { get; set; }

        public string? SKU { get; set; }
        public string? Title { get; set; }
        public decimal Precio { get; set; }
        public int CantidadStock { get; set; }


        public int TiendaID { get; set; }
        public Tienda? Tienda { get; set; } // Propiedad de Navegación ?????
    }
}