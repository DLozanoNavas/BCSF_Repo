#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int Valor;
    struct nodo* siguiente;
} nodo;

int main()
{
    nodo* lista = NULL; // Crear una lista vacía.


    nodo* n = malloc(sizeof(nodo));
    if(n == NULL)
    {
        printf("Error de memoria.\n");
        return 1;
    }
    // Tenemos nuevo nodo! :D
    // (*n).Valor = 2;
    // (*n).siguiente = NULL;


    n -> Valor = 2;
    n -> siguiente = NULL;


    lista = n; // Agregando n como primer elemento de la lista


    n = malloc(sizeof(nodo));
    if(n == NULL)
    {
        printf("Error de memoria.\n");
        return 1;
    }

    n -> Valor = 4;
    n -> siguiente = NULL;


    // Recorrer toda la lista de nodos
    nodo* tmp = lista;
    while(tmp->siguiente != NULL)
    {
        tmp = tmp -> siguiente;
    }

    // Cuando lleguemos acá, tmp va a estar apuntando al último nodo de la lista.
    tmp -> siguiente = n; // haciendo de n el último nodo


    // Agregar un nodo al inicio de la colección.

    n = malloc(sizeof(nodo));
    if(n == NULL)
    {
        printf("Error de memoria.\n");
        return 1;
    }

    n -> Valor = 1;
    n -> siguiente = NULL;


    n -> siguiente = lista;
    lista = n; // agregando un elemento al principio.



    // Imprimir la colección

    tmp = lista;
    while(tmp -> siguiente != NULL)
    {
        printf("%i -> ", tmp -> Valor);
        tmp = tmp-> siguiente;
    }

    printf("%i \n", tmp -> Valor);

}