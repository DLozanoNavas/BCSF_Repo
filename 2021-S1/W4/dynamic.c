#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x;
    int* y;

    x = malloc(10 * sizeof(int));

    *x = 42;

    y = x;


    printf("Y: %i\n", *y);
    printf("X: %i\n", *x);

    printf("Y: %p\n", y);
    printf("X: %p\n", x);

}