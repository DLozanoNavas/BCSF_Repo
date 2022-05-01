#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(void){

    FILE* archivo = fopen("numeros.txt", "a");

    if(archivo == NULL){
        printf("Algo salió terriblemente mal.\n");
        return 1;
    }

    string buffer = "HolaMundo!";

    fwrite(buffer, sizeof(int), 11, archivo);

    fclose(archivo);


}