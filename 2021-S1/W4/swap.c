#include <stdio.h>

void intercambiar(int a, int b);

int main()
{
    // Intercambiar dos variables

    int x = 1;
    int y = 2;

    printf("[ANTES] x es: %i, Y es: %i\n", x, y);

    intercambiar(x,y);

    printf("[DESPUES] x es: %i, Y es: %i\n", x, y);

}


void intercambiar(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}