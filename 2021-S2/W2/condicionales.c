#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y;
    x = get_int("x: ");
    y = get_int("y: ");

    if (x < y) // Es x menor que y
    {
        printf("x es menor que y\n");
    }
    else if( x > y )
    {
        printf("x es mayor que y\n");
    }
    else
    {
        printf("x es igual a y\n");
    }

    return 0;
}