// See https://aka.ms/new-console-template for more information

using Polymorphism;

IAnimal animal = new Dog();



animal.SayHi();

Console.WriteLine($"I am a {animal.Type} & I have {animal.legs} legs.");
