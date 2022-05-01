// Aritmética de coma flotante con dobles

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Preguntar al usuario el valor de x
    double x = get_double("x: ");

    // Preguntar al usuario el valor de y
    double y = get_double("y: ");

    // Realizar división
    printf("x / y = %.50f\n", x / y);
}
