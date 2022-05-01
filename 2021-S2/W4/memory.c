#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * n = malloc(10 * sizeof(int));

    if(n == NULL)
    {
        printf("Algo salió mal!\n");
        return 1;
    }

    n[9] = 50;

    printf("%i\n", n[9]);

    free(n);
}