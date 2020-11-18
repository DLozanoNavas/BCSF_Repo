// Crea pollitos con While Loops
#include <stdio.h>
#include <cs50.h>

int main (void){

    int PollitosCreados = 0;

    int numeroDelPollitos = get_int("¿Cuántos Pollitos Quieres? ");

    while ( PollitosCreados < numeroDelPollitos){

        printf("Pollito #%i\n", PollitosCreados);
        PollitosCreados++;
    }
}