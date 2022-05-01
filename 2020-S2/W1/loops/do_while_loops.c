// Crea pollitos con un Do While Loop
#include <stdio.h>
#include <cs50.h>

int main (void){

    int PollitosCreados = 0;

    int numeroDePollitos = get_int("¿Cuántos Pollitos Quieres? ");

    do {

        printf("Pollito #%i\n", PollitosCreados);
        PollitosCreados++;

    } while ( PollitosCreados < numeroDePollitos );



}