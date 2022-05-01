using System;

namespace Polymorphism {

    public class Dog : IAnimal
    {
        public string Type { get; set; } = "Dog";
        public int legs { get; set; } = 4;

        public  void SayHi()
        {
            Console.WriteLine("Wouf! By Nico.");
        }
    }

}