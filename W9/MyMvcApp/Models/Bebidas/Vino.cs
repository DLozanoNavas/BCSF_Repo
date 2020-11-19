using System;

namespace MyMvcApp.Models {
    public class Vino : Bebida
    {
        public override bool Carbonatada {get;set;} = false;
        public override float GradosAlcohol {get;set;} = 20;
    }
}