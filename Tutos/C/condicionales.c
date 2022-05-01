#include <stdio.h>
#include <cs50.h>

int main()
{
    // Este programa nos dice si vamos al parque.

    int Dinero = get_int("¿Cuánto dinero tienes? ");

    bool DiaSoleado = false;

    // Tipos de operadores condicionales:

    // ==  Igual
    // <=  Menor o igual
    // >= Mayor o Igual
    // > Mayor que
    // < Menor que
    // && "Y"
    // || "O"
    // ! "No"

    if (Dinero == 0 || DiaSoleado == false )
    {
        printf("Nos quedamos en la casa.\n");
    }


    if (DiaSoleado == true && Dinero > 0)
    {
        printf("Fuímonos para el parque!\n");
    }
    else
    {
        printf("Se armó el parrandón!\n");
    }

}