#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("El argumento #%i es: %s.\n", i, argv[i]);
    }
}