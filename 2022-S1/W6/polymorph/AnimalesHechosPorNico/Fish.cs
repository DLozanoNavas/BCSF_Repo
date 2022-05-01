using System;

namespace Polymorphism {

    public class Fish : IAnimal
    {
        public string Type { get; set; } = "Fish";
        public int legs { get; set; } = 0;
        public  void SayHi()
        {
            Console.WriteLine("Blop!");
        }
    }

}