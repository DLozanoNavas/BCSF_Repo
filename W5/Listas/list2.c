// Versión mejorada lista 1
#include <stdio.h>
#include <stdlib.h>


int main(void){

    int* lista = malloc(sizeof(int) *3);

    if(lista == NULL)
        return 1;

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    printf("Lista está en: %p\n", lista);
    // imprimir
    for(int i = 0; i<3; i++){
        printf("%p: %i\n", &lista[i], lista[i]);
    }

    // Copiar lista a una nueva lista con realloc
    int* tmp = realloc(lista, sizeof(int) * 4);

    if(tmp == NULL)
        return 1;

    lista = tmp;

    lista[3] = 4;


    printf("La nueva lista está en: %p\n", lista);
    // imprimir
    for(int i = 0; i<4; i++){
        printf("%p: %i\n", &lista[i], lista[i]);
    }

    free(lista);

}

