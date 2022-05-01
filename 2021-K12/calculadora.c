#include <stdio.h>
#include <cs50.h>

int main()
{
    int i = get_int("i: ");
    int g = get_int("g: ");

    printf("i mas g es igual a: %i\n", (i + g) );
    printf("i menos g es igual a: %i\n", i - g );
    printf("i por g es igual a: %i\n", i * g );
    printf("i dividido en g es igual a: %i\n", i / g );
    printf("El residuo de i dividido en g es igual a: %i\n", i % g );

}