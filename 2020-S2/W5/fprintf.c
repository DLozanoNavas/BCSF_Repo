#include <stdio.h>
#include <cs50.h>

int main(void){

    FILE* archivo = fopen("numeros.txt", "w");
    if(archivo == NULL){
        printf("Error.\n");
        return 1;
    }

    char* s = get_string("Qué quieres agregar:");

    fprintf(archivo, "%s\n", s);

    fclose(archivo);


}