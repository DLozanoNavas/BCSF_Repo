using System;
using System.Threading;
using System.Threading.Tasks;

namespace CoffeeMaket
{
    class Program
    {
        static async Task Main(string[] args)
        {
            CoffeeMaker cm = new CoffeeMaker();

            cm.PonerAguaEnOlla();
            cm.PonerOllaEnEstufa();
            cm.PrenderEstufa();
            //CalentarAgua();

            // Thread th = new Thread(CoffeeMaker.CalentarAgua);
            var r = cm.CalentarAgua();

            cm.PonerTazasEnMeson();
            cm.PonerCafeEnTazas();
            cm.PonerAzucarEnTazas();
            Console.WriteLine(await r);
            cm.PonerAguaEnTazas();
            Console.WriteLine("Listo el café.");
        }
    }

    public class CoffeeMaker {
        // 1. Poner agua en una olla.
        // 2. Poner la olla en la estufa.
        // 3. Prender la estufa
        // 4. Calentar agua.
        // 5. Poner tazas en el mesón.
        // 6. Poner café en las tazas
        // 7. Poner azucar en las tazas
        // 8. Poner agua caliente en las tazas


        public  Task PonerAguaEnOlla(){
            Console.WriteLine("Poner Agua En Olla");
            return null;
        }


        public void PonerOllaEnEstufa(){
            Console.WriteLine("Poner Olla En Estufa");

        }

        public  void PrenderEstufa(){
            Console.WriteLine("Prender Estufa");

        }

        public   Task<string> CalentarAgua(){
            
            Console.WriteLine("Calentando Agua");

            Task.Delay(15000);

            //Console.WriteLine("Lista el agua");

            return Task.FromResult<string>("Lista el agua");

        }

        public void PonerTazasEnMeson(){
            Console.WriteLine("Poner Tazas En Meson");

        }
        public void PonerCafeEnTazas(){
            Console.WriteLine("Poner Cafe En Tazas");

        }
        public void PonerAzucarEnTazas(){
            Console.WriteLine("Poner Azucar En Tazas");

        }
        public void PonerAguaEnTazas(){
            Console.WriteLine("Poner Agua En Tazas");

        }
    }
}
