#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(){

    // Crear un archivo
    FILE* archivo = fopen("agenda.csv", "a");

    if(!archivo){
        printf("No se encontró el archivo.\n");
        return 1;
    }

    // Obtener el nombre y numero de una persona
    char* nombre = get_string("Nombre: \n");
    char* telefono = get_string("Numero: \n");


    fprintf(archivo, "%s,%s\n", nombre, telefono);

    // Cerrar archivo

    fclose(archivo);


}