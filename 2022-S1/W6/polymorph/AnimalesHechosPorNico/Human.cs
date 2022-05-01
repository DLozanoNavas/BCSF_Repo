namespace Polymorphism
{
    public class Human : IAnimal
    {
        public string Type { get; set; } = "Human";
        public int legs { get; set; } = 2;

        public  void SayHi()
        {
            Console.WriteLine("Hi!");
        }
    }
}