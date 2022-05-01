using System.ComponentModel.DataAnnotations;

namespace DemoWebApp.Models
{
    public class Product
    {
        [Key]
        public int Id { get; set; }

        public DateTime Timestamp { get; set; } = DateTime.Now;
        public string? Title { get; set; }

        public decimal Price { get; set; }

        public double Stock { get; set; }


        public int StoreID { get; set; }
        public Store? Store { get; set; }



        public List<OrderLine>? OrderLine { get; set; }
    }
}
