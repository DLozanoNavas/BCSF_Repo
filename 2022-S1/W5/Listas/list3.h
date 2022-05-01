#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// DECLARACIONES DE TIPOS

// Crear el struct nodo
typedef struct nodo {
    int numero;
    struct nodo* siguiente;
} nodo;

// DECLARACIONES DE FUNCIONES
void ImprimirMenu();


nodo* AgregarNodo(nodo * lista);
nodo* ImprimirNodo(nodo * lista );
nodo* ImprimirLista(nodo * lista);
nodo* BorrarLista(nodo * lista);
