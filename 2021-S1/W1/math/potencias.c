// Librería Math

#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double base = get_double("Base: ");
    double exponente = get_double("Exponente: ");
    printf("Salida: %.0f\n", pow(base, exponente));
}
