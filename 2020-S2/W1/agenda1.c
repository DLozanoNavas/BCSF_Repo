#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string nombre;
    string numero;
} persona;


int main(void){

    persona contactos[4];

    contactos[0].nombre = "EMMA";
    contactos[0].numero = "312-320-5587";

    contactos[1].nombre = "SEBASTIAN";
    contactos[1].numero = "315-320-5587";

    contactos[2].nombre = "DAVID";
    contactos[2].numero = "320-320-5587";

    contactos[3].nombre = "CAMILO";
    contactos[3].numero = "300-320-5587";

    string respuesta = get_string("Qué nombre quieres buscar?");

    for(int i = 0; i < 4; i++){

        if(!strcmp(contactos[i].nombre, respuesta)){
            printf("Encontrado %s\n", contactos[i].numero);
            return 0;
        } else if( 1==1){
            
        } else if (2==2){
            
        } else {
            
        }

    }

    printf("No entontrado.\n");
    return 1;

}