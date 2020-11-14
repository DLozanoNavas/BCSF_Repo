#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Representar un nodo.
typedef struct nodo
{
    int numero;
    struct nodo* next;
} nodo;

int main(){

    nodo* lista = NULL;



    int contador_nodos = 0;
    int nodos_a_crear = get_int("Nodos a crear: ");

    while (contador_nodos < nodos_a_crear){

        contador_nodos++;

        printf("Valor nodo %i: ", contador_nodos );

        int Respuesta = get_int("");

        nodo* n = malloc(sizeof(nodo));

        if( n == NULL){
            return 1;
        }

        n -> numero = Respuesta;
        n -> next = NULL;

        if(lista == NULL){

            lista = n;

        } else {
            // Backup de dirección original lista
            nodo* lista_original = lista;
            // Si la lista solo tiene un elemento
            if(lista -> next == NULL){
                lista -> next = n;
            } else {
                // si la lista tiene más de un elemento

                // Recorriendo la lista hasta el final
                while (lista != NULL){

                    nodo * tmp = lista -> next;

                    //
                    if (tmp -> next == NULL)      {
                        tmp -> next = n;
                        break;
                    }

                    lista = tmp;

                }
            }

            lista = lista_original;
        }

    }


    for (nodo* tmp = lista; tmp != NULL; tmp = tmp -> next){
        printf("%i\n", tmp -> numero);
    }


     contador_nodos = 0;
     nodos_a_crear = get_int("Nodos a crear: ");

    while (contador_nodos < nodos_a_crear){

        contador_nodos++;

        printf("Valor nodo %i: ", contador_nodos );

        int Respuesta = get_int("");

        nodo* n = malloc(sizeof(nodo));

        if( n == NULL){
            return 1;
        }

        n -> numero = Respuesta;
        n -> next = NULL;

        if(lista == NULL){

            lista = n;

        } else {
            // Backup de dirección original lista
            nodo* lista_original = lista;
            // Si la lista solo tiene un elemento
            if(lista -> next == NULL){
                lista -> next = n;
            } else {
                // si la lista tiene más de un elemento

                // Recorriendo la lista hasta el final
                while (lista != NULL){

                    nodo * tmp = lista -> next;

                    //
                    if (tmp -> next == NULL)      {
                        tmp -> next = n;
                        break;
                    }

                    lista = tmp;

                }
            }

            lista = lista_original;
        }

    }


    for (nodo* tmp = lista; tmp != NULL; tmp = tmp -> next){
        printf("%i\n", tmp -> numero);
    }

    while (lista != NULL){
        nodo * tmp = lista -> next;
        free(lista);
        lista = tmp;
    }
}

