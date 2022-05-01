#include <stdlib.h>
#include <stdio.h>

void MiPequenaFuncion(void);

void MiPequenaFuncion(void){

    // malloc = memory allocation (Asignación de memoria)
    int tamano_entero = sizeof(int);

    int* x = malloc(10 *  tamano_entero);

    x[9] = 0;

    free(x);

}

int main(){

    MiPequenaFuncion();
    return 0;

}
