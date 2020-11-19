using System;

namespace MyMvcApp.Models {
    public class Gaseosa : Bebida
    {

        public override bool Carbonatada { get; set; } = true;
        public override float GradosAlcohol { get; set; } = 0;
    }
}