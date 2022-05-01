#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){

    string nombres[] = {"EMMA", "SEBASTIAN", "DAVID", "CAMILO"};
    string numeros[] = {"312-345-2811", "315-320-8978", "318-455-1232", "320-8552138"};


    string respuesta = get_string("Nombre a buscar: ");

    for(int i = 0; i < 4; i++){

        if(!strcmp(nombres[i], respuesta )){
            printf("Encontrado: %s\n", numeros[i]);
            return 0;
        } else{
            printf("%s no está en la posición %i.\n", respuesta,  i);
        }
    }

    printf("No encontrado.\n");
    return 1;

}