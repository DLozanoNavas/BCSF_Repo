#include <stdio.h>
#include <stdlib.h>

// Crea una lista linkeada
int main(){

    int *lista = malloc(3 * sizeof(int));
    if(lista == NULL){
        return 1;
    }

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    for(int i = 0; i < 3; i++){
        printf("%i\n", lista[i]);
    }

    int *tmp = malloc(4 * sizeof(int));
    if(tmp == NULL){
        return 1;
    }

    for(int i = 0; i <3; i++){
        tmp[i] = lista[i];
    }

    tmp[3] = 4;

    free(lista);

    lista = tmp;

    for(int i = 0; i < 4; i++){
        printf("%i\n", lista[i]);
    }

    free(tmp);
}