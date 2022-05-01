#include <stdio.h>
#include <cs50.h>
#include "librerias.h"



int main(void) {

    int CantidadDePollitos = PreguntarCuantosPollitos();

    ImprimirPollitos(CantidadDePollitos);

}

int PreguntarCuantosPollitos() {

    int Respuesta = get_int("¿Cuántos pollitos quieres? ");

    return Respuesta;
}


void ImprimirPollitos(int Cantidad){

    for(int i = 0; i < Cantidad ; i++){
        printf("Pollito!\n");
    }

}

