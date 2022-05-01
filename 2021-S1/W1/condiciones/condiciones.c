// Condiciones y operadores relacionales

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pregunta al usuario por el valor de x
    int x = get_int("x: ");

    // Pregunta al usuario por el valor de y
    int y = get_int("y: ");

    // Compara x con y
    if (x < y)
    {
        printf("x es menor que y\n");
    }
    else if (x > y)
    {
        printf("x ex mayor que y\n");
    }
    else
    {
        printf("x es igual a y\n");
    }
}
