#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int cantidadPollitos = get_int("¿Cuántos pollitos? ");


    for(int i = 0; i < cantidadPollitos; i++)
    {
        printf("Pollito #%i\n", i);
    }

}