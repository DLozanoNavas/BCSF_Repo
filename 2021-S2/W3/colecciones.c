#include <cs50.h>
#include <stdio.h>

int main()
{
    int puntaje1 = 35;
    int puntaje2 = 36;
    int puntaje3 = 80;

    int puntajes[3];
    puntajes[0] = 35;
    puntajes[1] = 15;
    puntajes[2] = 80;

    long pesoAsteriodes[3];
    pesoAsteriodes[0] = 1354654654;
    pesoAsteriodes[1] = 15465654654;
    pesoAsteriodes[2] = 23;


    string palabras[5];
    palabras[0] = "Hola";
    palabras[1] = " ";
    palabras[2] = "Mundo";
    palabras[3] = "!";
    palabras[4] = "...";


    for (int i = 0; i < 5; i++ )
    {
       printf("%s\n", palabras[i]);
    }

}