#include <stdio.h>

int main(){

    // Cerar una lista de tamaño 3
    int lista[3];

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    // Imprimir esta lista
    for(int i = 0; i < 3; i++ ){
        printf("%i\n", lista[i]);
    }

}