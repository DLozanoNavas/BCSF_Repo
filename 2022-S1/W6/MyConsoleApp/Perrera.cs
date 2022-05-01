using System;
using System.Collections.Generic;
using Animales;

namespace Boomlabs.Ejemplo.Edificios {

    class Perrera {
        
        public List<Perrito> perritos {get; set;}

        public void BanarPerritos(){
            
            foreach(Perrito p in perritos){

                Console.WriteLine($" **Bañando** {p.Nombre}"  );
            }
        }

    }

}