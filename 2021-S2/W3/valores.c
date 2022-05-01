#include <stdio.h>

int Sumar(int a, int b);

int main()
{
    int x = 1;
    int y = 2;

    printf("x: %i \n", x);

    int z = Sumar(x,y);

    printf("z: %i \n", z);

    printf("x: %i \n", x);

}


int Sumar(int a, int b)
{

    a = 10;

    return a + b;
}