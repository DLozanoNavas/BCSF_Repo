using System;

namespace MyMvcApp.Models {
    public class Cerveza : Bebida {
        public override bool Carbonatada { get; set; } = true;
        public override float GradosAlcohol { get; set; } = 5;
    }
}