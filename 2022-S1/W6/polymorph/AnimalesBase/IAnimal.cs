using System;

namespace Polymorphism {

    public interface IAnimal
    {
        string Type { get; set; }
        int legs { get; set; }
        void SayHi();
    }

}