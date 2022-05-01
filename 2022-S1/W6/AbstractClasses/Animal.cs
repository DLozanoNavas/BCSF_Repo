using System;

namespace AbstractClasses 
{
    abstract class Animal {
        public abstract void HacerSonido();
    }

    class Gato : Animal{
        public override void HacerSonido()
        {
            Console.WriteLine("Miauuu");
        }
    }
    class Perro : Animal{

        public override void HacerSonido(){
            Console.WriteLine("WAufff!");
        }

    }

}