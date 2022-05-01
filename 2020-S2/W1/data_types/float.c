// get_float y printf con %f

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float precio = get_float("¿Cuál es el precio?\n$");
    printf("Tu total es: $%.2f.\n", precio + (precio * 0.19));
}
