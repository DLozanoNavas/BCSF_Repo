// Devolver valores

#include <cs50.h>
#include <stdio.h>

int cuadrado(int n);

int main(void)
{
    int entrada = get_int("Entrada: ");
    printf("Salida: %i\n", cuadrado(entrada));
}

// Sacar el cuadrado de n
int cuadrado(int n)
{
    return n * n;
}
