#include <stdio.h>
#include <cs50.h>

int main()
{
    float Sumatoria = 0.0;
    float Promedio;

    int CantidadElementos = get_int("Cuántas notas? ");

    int Notas[CantidadElementos];

    for(int i = 0; i < CantidadElementos; i++)
    {
        printf("Ingrese la nota %i: ", i);
        Notas[i] = get_int("");
    }


    for(int i = 0; i < CantidadElementos; i++)
    {
        Sumatoria = Sumatoria + Notas[i];
    }

    // Imprimir las Notas
    for(int i = 0; i < CantidadElementos; i++)
    {
        printf("Nota %i: %i\n", i , Notas[i] );
    }

    Promedio = Sumatoria / CantidadElementos;

    printf("Promedio %f\n", Promedio);

}