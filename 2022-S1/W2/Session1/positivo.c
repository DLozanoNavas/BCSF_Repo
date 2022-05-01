// Abstraction and scope

#include <cs50.h>
#include <stdio.h>

int pedir_entero_positivo(void);

int main(void)
{
    int i = pedir_entero_positivo();

    printf("%i\n", i);
}

// Pedir al usuario un entero positivo
int pedir_entero_positivo(void)
{
    int n;
    do
    {
        n = get_int("Ingresa un entero positivo: ");
    } while (n < 1);
    return n;
}
