using System.ComponentModel.DataAnnotations;

namespace DemoWebApp.Models
{
    public class OrderLine
    {
        [Key]
        public int Id { get; set; }

        public DateTime Timestamp { get; set; } = DateTime.Now;

        public int OrderID { get; set; }
        public Order? Order { get; set; }

        public int ProductID { get; set; }
        public Product? Product { get; set; }
    }
}
