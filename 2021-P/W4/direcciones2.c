#include <stdio.h>

int main()
{
    // De-Referenciar una dirección

    int n = 50;
    int* p = &n;

    printf("%p\n", p);

    printf("%i\n", n);

}