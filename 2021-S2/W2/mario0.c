#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int bloques = get_int("¿Cuántos bloques ponemos? ");

    for(int i = 0; i < bloques; i++)
    {
        printf("#\n");
    }
    printf("\n");
}