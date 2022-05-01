#include <stdio.h>
#include <stdlib.h>

int main(){

    int* lista = malloc( 3 * sizeof(int));
    if(lista == NULL){
        return 1;
    }

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    int * tmp = realloc(lista, 4 * sizeof(int));
    if(tmp == NULL){
        return 1;
    }

    lista = tmp;

    lista[3] = 4;

    for(int i = 0; i <4; i++){
        printf("%i\n", lista[i]);
    }

    free(lista);

}