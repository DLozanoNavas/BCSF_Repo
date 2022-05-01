// Crea pollitos con un for loop que tiene declarado el contador fuera del ciclo

#include <stdio.h>
#include <cs50.h>

int main (void){

    int contador_de_pollitos = 0;

    int numero_de_pollitos = get_int("¿Cuántos Pollitos Quieres? ");

    for ( ; contador_de_pollitos < numero_de_pollitos ; contador_de_pollitos++){

        printf("Pollito #%i\n", contador_de_pollitos);
    }
}