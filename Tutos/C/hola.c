#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Variables: Cajas de tamaño fijo que guardan algún dato.
    // El dato que guardan puede variar.

    // Un Bit puede ser simplemente 1 o 0
    // Un Byte es una colección de 8 1s y 0s
    // Un char tiene 1 Byte de tamaño.
    // Un int tiene 4 Bytes de tamaño. (4 * 8 = 32 Bits)
    // Un float tiene 4 Bytes de tamaño. (4 * 8 = 32 Bits)

    // Una colección de caracteres AlfaNuméricos se llama string

    string nombre = get_string("¿Cuál es tu nombre? ");

    printf("Hola %s!\n", nombre);

}
