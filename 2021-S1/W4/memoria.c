#include <stdio.h>
#include <stdlib.h>


void f()
{
    int y = 0;
    int* x = malloc(10 * sizeof(int));

    x[10] = 0;

    free(x);
}

int main()
{
    f();
    return 0;
}