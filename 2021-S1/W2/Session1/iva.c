#include <stdio.h>
#include <cs50.h>

int main(void){

    float Precio = get_int("¿Cuál es el precio? ");

    float IVA = Precio * 0.19;

    printf("El IVA es: %.2f\n", IVA);

}

