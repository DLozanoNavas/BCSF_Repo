#include <stdio.h>
#include <stdlib.h>

// Crear el struct nodo

typedef struct nodo{
    int numero;
    struct nodo* siguiente;
} nodo;




int main(){

    // Crear una lista vacía
    nodo *lista = NULL;

    // Agregar un nodo a la lista
    nodo *n = malloc(sizeof(nodo));
    if(n == NULL){
        printf("No se pudo obtener memoria desde malloc.\n");
        return 1;
    }
    n -> numero = 2;
    n -> siguiente = NULL;
    // Asignar el primer elemento en la lista a la lista
    lista = n;

    n = malloc(sizeof(nodo));
    if(n == NULL){
        printf("No se pudo obtener memoria desde malloc.\n");
        return 1;
    }
    n -> numero = 3;
    n -> siguiente = NULL;

    nodo * tmp = lista;
    while(tmp -> siguiente != NULL){
        tmp = tmp -> siguiente;
    }
    tmp -> siguiente = n;



    tmp = lista;

    for(nodo *temp = lista ; temp != NULL; temp = temp -> siguiente){
        printf("%i", temp -> numero);
        printf(" -> ");
    }

    // Devolver la memoria de la lista
    while( lista != NULL){
        nodo* s = lista -> siguiente;
        free(lista);
        lista = s;
    }


}