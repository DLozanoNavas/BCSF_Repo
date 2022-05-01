#include <cs50.h>
#include <stdio.h>

int main(void){
    string nombre = get_string("¿Cómo te llamas? ");
    printf("Hola, %s\n!", nombre);
}