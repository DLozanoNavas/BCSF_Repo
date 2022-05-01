#include <stdio.h>
#include <stdlib.h>

// Representar un nodo.
typedef struct nodo
{
    int numero;
    struct nodo* next;
} nodo;

int main(){

    nodo* lista = NULL;

    nodo* n = malloc(sizeof(nodo));
    if( n == NULL){
        return 1;
    }

    n -> numero = 1;
    n -> next = NULL;

    lista = n;



    n = malloc(sizeof(nodo));
    if( n == NULL){
        return 1;
    }

    n -> numero = 2;
    n -> next = NULL;

    lista -> next = n;

    n = malloc(sizeof(nodo));
    if(n == NULL){
        return 1;
    }

    n -> numero = 3;
    n -> next = NULL;

    lista -> next -> next = n;

    for (nodo* tmp = lista; tmp != NULL; tmp = tmp -> next){
        printf("%i\n", tmp -> numero);
    }

    while (lista != NULL){
        nodo * tmp = lista -> next;
        free(lista);
        lista = tmp;
    }
}