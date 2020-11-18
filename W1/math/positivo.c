// Abstracción y alcance

#include <cs50.h>
#include <stdio.h>

int obtener_entero_positivo(void);

int main(void)
{
    int i = obtener_entero_positivo();
    printf("%i\n", i);
}

// Preguntar al usuario por un entero positivo
int obtener_entero_positivo(void)
{
    int n;
    do
    {
        n = get_int("Entero positivo: ");
    } while (n < 1);
    return n;
}
