#include <stdio.h>
#include <cs50.h>

int main(void){

    string nombre = get_string("¿Cuál es tu nombre?");

    printf("¡Hola, %s!\n", nombre);

}