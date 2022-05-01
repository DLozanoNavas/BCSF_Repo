

public class Program
{
    public static void Main(string[] args){

        Perro tony = new Perro(4, "Tony", "Canis familiaris", "Beige"); 
        tony.PesoEnKg = 12.5f;

        Pato Donald = new Pato(2, "Donald", "Anas platyrhynchos domesticus", "Blanco");

        Donald.PesoEnKg = 8.5f; 


        
        Gato Michi = new Gato(4,"Michis", "Felis catus", "Negro");

        Michi.PesoEnKg = 5.5f;


        Gato Alana = new Gato(4,"Alana", "Felis catus", "Blanco");

        Alana.PesoEnKg = 6.5f;

        Alana.EstablecerNombreCientifico("Felis Catus");


        List<Animal> Mascotas = new();

        Mascotas.Add(tony);
        Mascotas.Add(Donald);
        Mascotas.Add(Michi);
        Mascotas.Add(Alana);

        // Console.WriteLine($"Cantidad de mascotas: {Mascotas.Count}");
        // Calcular el peso de mis 3 mascotas;
        // var pesoTotal = tony.PesoEnKg + Donald.PesoEnKg + Michi.PesoEnKg;
        // Console.WriteLine($"El peso total de tus mascotas es: {pesoTotal} KG");
        double pesoTotal = 0;
        foreach (var animal in Mascotas)
        {
            pesoTotal = pesoTotal + animal.PesoEnKg;
        }
        Console.WriteLine($"El peso total de tus mascotas es: {pesoTotal} KG"); // Esto es un comentario


        // Comentarios

        /*
            Esto es un comentario

            Esto también!
        */


        // Qué pasa si quiero que un String esté en múltiple líneas?


        Console.WriteLine(@$"¿Le gustaría aprender un lenguaje de programación, {Donald.Color}
                            pero no sabe por dónde empezar? ¡Empiece por aquí!
                            Descubra la sintaxis y los procesos lógicos básicos que se necesitan para compilar aplicaciones sencillas con C#.");



        // Saltos de línea

        Console.Write("Hola Mundo\n Hola Daniel\n"); // Esta no inserta ningún salto de línea
        Console.WriteLine("Hola Mundo!"); // Automáticamente inserta un salto de línea (\n)
    }
}

// Programación Orientada a objetos

// ¿Qué es un objeto?

// Atributos de un animal
// - Color
// - Numero de Extermidades
// - Altura en CM
// - Peso en KG
// - Nombre Común
// - Nombre Científico
// ...

// Funciones de cada animal
// - Comer
// - Hacer sonido
// - Poop

// Para modelar un objeto usamos una clase
// Una clase es un contenedor para atributos y funciones (Propiedades y métodos - (Miembros))
// C/u de los miembros tiene un "Modificador de acceso" (public, private)


/// <summary>
/// Esta clase representa un animal genérico
/// </summary>
public abstract class  Animal
{

    public Animal(int NumExtremidades, string nombreComun, string nombreCientifico, string color)
    {
        Color = color;
        NombreComun = nombreComun;
        NombreCientifico = nombreCientifico;
        NumeroExtermidades = NumExtremidades;
    }

    public string Color { get; set; }
    public int NumeroExtermidades { get; set; }
    public float AlturaEnCentimetros { get; set; }
    public float PesoEnKg { get; set; }
    public abstract string NombreComun { get; set; }
    string NombreCientifico { get; set; }

    /// <summary>
    /// Establece el nombre cientifico de un animal
    /// </summary>
    /// <param name="nombreCientifico">Debe contener el nombre cientifico del animal</param>
    public void EstablecerNombreCientifico(string nombreCientifico)
    {
        NombreCientifico = nombreCientifico;
    }    


    public void ImprimirNombreCientifico()
    {

    }
    /// <summary>
    /// Imprime el nombre común de un animal
    /// </summary>
    public void ImprimirNombreComun()
    {
        Console.WriteLine($"Nombre Común: {NombreComun}");
    }

    public void ImprimirDatos()
    {
        Console.WriteLine($"Nombre Común: {NombreComun}");
        Console.WriteLine($"Peso En KG: {PesoEnKg}");
        Console.WriteLine($"Color: {Color}");
        Console.WriteLine($"Numero de Extermidades: {NumeroExtermidades}");
    }

    public void Comer()
    {
        Console.WriteLine("**Comiendo**");
    }

    public abstract void HacerSonido();

    public void Poop()
    {
        Console.WriteLine("**Pooping**");
    }

}



public class Perro : Animal
{
    public Perro(int NumExtremidades, string nombreComun, string nombreCientifico, string color) : base(NumExtremidades, nombreComun, nombreCientifico, color)
    {

    }

    public override string NombreComun { get; set; } = "Perro";
    public override void HacerSonido()
    {
        Console.WriteLine("Wouf!");
    }
}

public class Gato : Animal
{


    public Gato(int NumExtremidades, string nombreComun, string nombreCientifico, string color) : base(NumExtremidades, nombreComun, nombreCientifico, color)
    {

    }
    public override string NombreComun { get; set; } = "Gato";

    public override void HacerSonido()
    {
        Console.WriteLine("Miauuuu!");
    }
}

public class Pato : Animal
{
    public int CantidadAlas { get; set; }
    public Pato(int NumExtremidades, string nombreComun, string nombreCientifico, string color) : base(NumExtremidades, nombreComun, nombreCientifico, color)
    {

    }
    public override string NombreComun { get; set; } = "Pato";
   public override void HacerSonido()
    {
        Console.WriteLine("Quack Quack!");
    }
}
