#include <stdio.h>

int main(){

    // Acceso aleatorio de las matrices
    int lista[3];

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    printf("Lista:\n");
    for (int i = 0; i< 3; i++){
        printf("%i\n", lista[i]);
    }

    int nuevaLista[4];


    // Copiar matriz
    for(int i = 0; i < 3; i++){
        // Copiar elemento por elemento
        nuevaLista[i] = lista[i];
    }

    nuevaLista[3] = 4;

    printf("Nueva Lista:\n");
    for (int i = 0; i< 4; i++){
        printf("%i\n", nuevaLista[i]);
    }
}