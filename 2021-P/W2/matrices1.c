#include <stdio.h>
#include <cs50.h>

int main()
{
    int cantidad = get_int("Cantidad: ");

    int puntajes[cantidad];

    int x = 0;


    for(int i = 0; i < cantidad; i++)
    {
        printf("Digite el valor del puntaje #%i: ", i + 1);
        puntajes[i] = get_int("");
    }

    for (int i = 0; i < cantidad; i++)
    {
        // TODO: Imprimir la colección
        printf("Puntaje #%i: %i.\n", i + 1, puntajes[i]);
    }


    printf("Puntaje #19000: %i.\n", puntajes[19000] );


    printf("Hola Mundo!\n");
}