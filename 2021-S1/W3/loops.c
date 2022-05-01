#include <stdio.h>

int main(){

    int contador = 0;

    //Haga {...} mientras que
    do {

        printf("Hola desde el Do While loop! %i\n", contador);

        contador++;

    } while (contador  < 100);

    int contadorWhile = 0;



    int i = 0;

    // para i igual a 0, mientras que i sea menor a 10, haga {...} y aumente i en 1.
    for ( ; i < 100 ; i++){
        printf("Hola desde el for loop! #%i\n", i);
    }

    // Mientras que ... Haga {...}
    while (i < 200) {
        printf("Hola desde el While loop! #%i\n", i);
        i++;
    }

}