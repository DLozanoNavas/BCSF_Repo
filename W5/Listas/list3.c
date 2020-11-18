#include <cs50.h>

#include "list3.h"


int main(){

    // Crear una lista vacía del programa
    nodo *lista = NULL;

    while (1 == 1){

        ImprimirMenu();

        char respuesta = get_char("Qué opción deseas: ");

        switch(respuesta){
            case '1':
                lista = AgregarNodo(lista);
                break;
            case '2':
                lista = ImprimirNodo(lista);
                break;
            case '3':
                lista = ImprimirLista(lista);
                break;
            case '4':
                lista = BorrarLista(lista);
                break;
            default:
                printf("No seleccionaste una opción válida.\n");
                break;

        }
    }



    return 0;
}


void ImprimirMenu(){

    printf("\n");
    printf("1. Agregar nuevo nodo \n");
    printf("2. Imprimir un nodo específico.\n");
    printf("3. Imprimir toda la lista.\n");
    printf("4. Borrar toda la lista\n");
    printf("5. TODO: Borrar un nodo.\n");
    printf("\n");

}


nodo* AgregarNodo(nodo * lista){

    int numero = get_int("¿Qué número quieres en el nodo?");

    // Agregar un nodo a la lista
    nodo *n = malloc(sizeof(nodo));
    if(n == NULL){
        printf("No se pudo obtener memoria desde malloc.\n");
    }else{

        n -> numero = numero;
        n -> siguiente = NULL;

        if(lista == NULL) // Significa que la lista es nueva y no tiene elementos aún.
        {
            lista = n; // Agregamos primer elemento a la lista
        }
        else
        {

            int pos = get_int("¿En qué posición quieres el nodo?");
            // Recorrer la lista antes de agregar el nodo para identificar si podemos agregar
            // el nodo en la posición solicitada.
            int cantidadNodos = 0;
            nodo * tmp = lista;

            while (tmp -> siguiente != NULL){
                tmp = tmp -> siguiente;
                cantidadNodos++;
            }

            // Si cantidadNodos == 0, significa que la lista está vacía.

            if(pos > cantidadNodos + 1){
                printf("Pos no válida, \"Fuera del índice actual\"");

            }else{


                if(pos == 0){
                    // Realizar algoritmo de agregar al principío
                    n -> siguiente = lista;
                    lista = n;
                }

                if(pos == cantidadNodos + 1){
                    // Agregar al final de la lista
                    tmp = lista;
                    while (tmp-> siguiente != NULL){
                        tmp = tmp-> siguiente;
                    }
                    // Acá estamos al final de la lista
                    tmp -> siguiente = n;
                }

                if(pos < cantidadNodos + 1 && pos > 0){
                    // Agregarlo al algún lugar en la mitad.
                    int posicionActual = 0;
                    for( tmp = lista; tmp -> siguiente != NULL; tmp = tmp-> siguiente){

                        posicionActual++;

                        if(posicionActual == pos ){
                            // Agregar nodo acá
                            n -> siguiente = tmp -> siguiente;
                            tmp -> siguiente = n;
                        }
                    }

                }

            }
        }

    }
    return lista;
}

nodo* ImprimirNodo(nodo * lista){
    int pos = get_int("¿Qué nodo quieres imprimir?");
    int PosicionActual = 0;
    for(nodo *tmp = lista ; tmp != NULL; tmp = tmp -> siguiente){

        if(PosicionActual == pos){
            printf("El nodo el la pos: %i tiene el valor: %i.\n", PosicionActual, tmp-> numero);
        }
        tmp = tmp -> siguiente;
        PosicionActual++;
    }

    return lista;

}


nodo* ImprimirLista(nodo * lista){
    if(lista == NULL){
        printf("La lista está vacía.\n");
        return NULL;
    }
    int counter = 0;
    for(nodo *temp = lista ; temp != NULL; temp = temp -> siguiente){
        if(counter != 0){
            printf(" -> ");
        }
        printf("%i", temp -> numero);
        counter++;
    }
    return lista;
}

nodo* BorrarLista(nodo * lista){
    // Devolver la memoria de la lista
    while( lista != NULL){
        nodo* s = lista -> siguiente;
        free(lista);
        lista = s;
    }
    lista = NULL;
    return lista;
}
