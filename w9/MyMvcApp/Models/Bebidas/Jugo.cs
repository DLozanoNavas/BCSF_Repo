using System;

namespace MyMvcApp.Models {
    public class Jugo : Bebida
    {
        public override bool Carbonatada { get; set; } = false;
        public override float GradosAlcohol { get; set; } = 0;

    }
}