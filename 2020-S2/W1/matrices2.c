#include <stdio.h>
#include <cs50.h>

int main(){

    while ( 1 == 1){

        // Cerar una lista de tamaño 3
        int tamano_matriz = get_int("¿De qué tamaño quieres la matriz?");

        int lista[tamano_matriz];

        for(int i = 0; i < tamano_matriz; i++ ){
            printf("¿Qué elemento quieres en %i? : ", i);
            lista[i] = get_int("");
        }

        // Imprimir esta lista
        printf("Imprimiendo lista original.\n");

        for(int i = 0; i < tamano_matriz; i++ ){
            printf("%i\n", lista[i]);
        }

        int adicional = get_int("¿Cuántas nuevas posiciones quieres agregar?");

        int nueva_lista[tamano_matriz + adicional];

        // Copiar lista a nueva_lista
        for(int i = 0; i < tamano_matriz; i++){
            nueva_lista[i] = lista[i];
        }

        for(int i = 0; i < adicional; i++){
            printf("¿Qué elemento quieres en la posición %i? ", tamano_matriz + i);
            nueva_lista[ tamano_matriz + i ] = get_int("");
        }

        printf("Imprimiendo lista nueva.\n");

        for(int i = 0; i< tamano_matriz + adicional; i++){
            printf("[%i]: %i\n", i, nueva_lista[i]);
        }

    }

}