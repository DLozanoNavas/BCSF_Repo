// Crea pollitos con un for loop
#include <stdio.h>
#include <cs50.h>

int main (void){

    int numero_de_pollitos = get_int("¿Cuántos Pollitos Quieres? ");

    for (int contador_de_pollitos = 0; contador_de_pollitos < numero_de_pollitos ; contador_de_pollitos++){

        printf("Pollito #%i\n", contador_de_pollitos);
    }
}