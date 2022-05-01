using System.ComponentModel.DataAnnotations;

namespace DemoWebApp.Models
{
    public class User
    {
        [Key]
        public int Id { get; set; }

        public string? Name { get; set; }
        public string? LastName { get; set; }
        public string? PostalCode { get; set; }
        public int Age { get; set; }
        public DateTime Birthday { get; set; }

        public List<Order>? Orders { get; set; }

    }
}
