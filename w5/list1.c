#include <stdio.h>
#include <stdlib.h>


int main(void){

    // Crear una nueva lista de tamaño 3.

    int * lista = malloc(sizeof(int) *3);
    if(lista == NULL){
        return 1;
    }


    // Inicializar la lista de 3 elementos con números
    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;

    printf("Lista está en: %p\n", lista);
    // imprimir
    for(int i = 0; i<3; i++){
        printf("%p: %i\n", &lista[i], lista[i]);
    }

    int * tmp = malloc(sizeof(int)*4);
    if(tmp == NULL){
        return 1;
    }

    // Copiar el contenido de la matriz a la nueva matriz
    for(int i = 0; i< 3; i++){
        tmp[i] = lista[i];
    }

    tmp[3] = 4;

    // Liberar lista brimero antes de cambiar su dirección
    free(lista);

    lista = tmp;

    printf("La nueva lista está en: %p\n", lista);
    // imprimir
    for(int i = 0; i<4; i++){
        printf("%p: %i\n", &lista[i], lista[i]);
    }

    free(lista);

}