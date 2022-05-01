using System;

namespace Polymorphism
{

    public class Cat : IAnimal
    {
        public string Type { get; set; } = "Cat";
        public int legs { get; set; } = 4;
        
        public void SayHi()
        {
            Console.WriteLine("Meawww!");
        }
    }
}