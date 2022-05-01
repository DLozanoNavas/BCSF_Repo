#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string nombre;
    string numero;
} persona;


int main(){

    // ToDO: Este programa está bugeado.

    persona contactos[5];

    contactos[0].nombre = "EMMA";
    contactos[0].numero = "+57 320-455-3368";

    contactos[1].nombre = "CAMILO";
    contactos[1].numero = "+57 320-455-3367";

    contactos[2].nombre = "CARLOS";
    contactos[2].numero = "+57 320-455-3366";


    contactos[3].nombre = "JULIANNA";
    contactos[3].numero = "+57 320-455-3365";


    contactos[4].nombre = "";
    contactos[4].numero = "+57 320-455-3364";


    string busqueda = get_string("Buscar: ");


    for(int i = 0; i < 5; i++)
    {
        if( (strcmp(busqueda, contactos[i].nombre) == 0) ){

            printf("Encontrado: \n %s \n %s \n", contactos[i].nombre, contactos[i].numero );
            return 0;

        }
    }


    printf("No encontrado. :(\n");




}