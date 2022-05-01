#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){


    string nombres[5] = { "EMMA", "CAMILO", "CARLOS", "JULIANNA", "SEBASTIAN" };
    string numeros[6] = { "+57 320-455-3368", "+57 320-455-3367", "+57 320-455-3366" , "+57 320-455-3365" , "+57 320-455-3364", "+57 320 555-5555" };

    // +57 320-455-3368

    string busqueda = get_string("Buscar: ");


    for(int i = 0; i < 5; i++)
    {
        if( (strcmp(busqueda, nombres[i]) == 0) ){
            printf("Encontrado: \n %s \n %s \n", nombres[i], numeros[i] );
            return 0;
        }
    }


    printf("No encontrado. :(\n");

    // ToDO: Este programa está bugeado.

    // Vamos a arreglarlo al regreso. 5:20 PM. 
}