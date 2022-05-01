#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int cantidadPollitos = atoi(argv[1]);

    for(int i = 0; i< cantidadPollitos; i++)
    {
        printf("Pollito #%i.\n", i);
    }
}