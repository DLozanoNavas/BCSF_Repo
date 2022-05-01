#include <stdio.h>
#include <cs50.h>

int main(int contadorArgumentos, string ColeccionArg[])
{
    printf("argv ejecutado con %i argumentos.\n", contadorArgumentos);

    for(int i = 0; i < contadorArgumentos; i++)
    {
        printf("Argumento #%i: %s.\n", i, ColeccionArg[i] );
    }
}