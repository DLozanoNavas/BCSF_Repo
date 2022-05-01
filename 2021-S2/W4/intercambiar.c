#include <stdio.h>

void Intercambiar(int* a, int* b);

int main()
{
    int a = 5;
    int b = 10;

    Intercambiar(&a, &b);


    printf("a: %i\n", a);
    printf("b: %i\n", b);
}

void Intercambiar(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}