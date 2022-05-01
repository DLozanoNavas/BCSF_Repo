#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("El tamaño de un int es: %lu bytes \n", sizeof(int));
    printf("El tamaño de un char es: %lu bytes\n", sizeof(char));
    printf("El tamaño de un float es: %lu bytes\n", sizeof(float));
    printf("El tamaño de un long es: %lu bytes\n", sizeof(long));

    // Pedir memoria (malloc)

    // Declarando una matriz de enteros estáticamente
    int i[4];
    i[0] = 1;
    i[1] = 2;
    i[2] = 3;
    i[3] = 3;


    int* m = malloc(8 * sizeof(int));
    // El puntero NULL (Puntero que no apunta a ninguna parte)

    // Excepciones: suceden cuando nuestro programa falla mientras se ejecuta
    // NullReferenceException: Tratando de dereferenciar un puntero NULL
    if( m == NULL){
        printf("Algo salió terriblemente mal.\n");
        return 1;
    }

    m[0] = 10;

    printf("%i\n", *m);



    free(m);


}