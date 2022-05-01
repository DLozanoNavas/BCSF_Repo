#include <stdio.h>
#include <cs50.h>

int main()
{
    string nombre = get_string("¿Cómo te llamas? ");

    printf("Hola, %s.\n", nombre );
}