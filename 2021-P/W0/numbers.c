#include <stdio.h>
#include <cs50.h>

int main()
{
    float i = get_float("i: ");
    float x = get_float("x: ");


    float suma = i + x;
    float resta = i - x;
    float multip = i * x;
    float divis = i / x;

    printf("Resultado Suma: %f\n", suma);
    printf("Resultado Resta: %f\n", resta);
    printf("Resultado Multiplicación: %f\n", multip);
    printf("Resultado División: %.15f\n", divis);
}