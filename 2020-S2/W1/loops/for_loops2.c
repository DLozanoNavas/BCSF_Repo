// Crea pollitos con un contador genérico que hemos llamado i
#include <stdio.h>
#include <cs50.h>

int main (void){

    int numero_de_pollitos = get_int("¿Cuántos Pollitos Quieres? ");

    for (int i = 0 ; i < numero_de_pollitos ; i++){

        printf("Pollito #%i\n", i);
    }
}