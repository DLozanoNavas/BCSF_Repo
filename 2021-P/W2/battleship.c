#include <stdio.h>
#include <cs50.h>

int main()
{
    int alto = get_int("altura: ");
    int ancho = get_int("anchura: ");

    int tablero[alto][ancho];

    for(int i = 0; i < alto; i++ )
    {
        for(int j = 0; j < ancho; j++)
        {
            printf("¿Quieres poner parte de tu flota en la posición [%i][%i]? ", i, j);
            tablero[i][j] = get_int("");
        }
    }

    while (true)
    {
        int x = get_int("x: ");
        int y = get_int("y: ");

        if(tablero[x][y] == 1)
        {
            printf("Acertaste! :D\n");
        }
        else
        {
            printf("Fallaste! :(\n");
        }

    }


}
