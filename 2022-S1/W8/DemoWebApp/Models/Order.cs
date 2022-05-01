using System.ComponentModel.DataAnnotations;

namespace DemoWebApp.Models
{
    public class Order
    {
        [Key]
        public int Id { get; set; }

        public DateTime Timestamp { get; set; } = DateTime.Now;

        public int UserID { get; set; }
        public User? User { get; set; }


        public List<OrderLine>? OrderLine { get; set; }

    }
}
