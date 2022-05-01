using System.ComponentModel.DataAnnotations;

namespace DemoWebApp.Models
{
    public class Store
    {
        [Key]
        public int Id { get; set; }

        public string? Name { get; set; }
        public string? Address { get; set; }

        public List<Product>? Products { get; set; }
    }
}
