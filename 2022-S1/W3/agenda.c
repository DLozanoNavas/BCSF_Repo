#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){


    string nombre_a_buscar = get_string("¿Qué nombre quieres buscar?");


    // Declarar una matriz de nombres
    string nombres[4] = { "Daniel", "Camilo", "Emma", "Sara" };

    string numeros[4] = { "320-999-6625" ,  "311-565-8456", "325-555-5556", "320-888-8881" };

    // implementar busqueda lineal (linear search)
    for (int i = 0; i < 4; i++){

        // Chequear si Emma está en la lista

        // igual va a contener un 0 si strcmp devuelve verdadero. (si = 0) (no = 1)
        int encontrado = strcmp(nombres[i], nombre_a_buscar);

        if(encontrado == 0){
            // Si llegamos acá, Emma está en la lista
            printf("%s está en la lista!\n", nombres[i]);
            printf("Numero: %s", numeros[i]);

            return 0;

        }
    }

    printf("No está en la lista.\n");
    return 1;

}