#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // Abriendo un archivo cpon permisos de lectura
    FILE* archivo = fopen("numeros.txt", "r");
    
    // Chequeando si el archivo existe
    if(archivo == NULL){
        printf("Algo salió mal\n");
        return 1;
    }

    // Pedimos espacio en memoria para almacenar 10 char
    char* buffer[] = malloc(10 * sizeof(char));

    // Chequeamos si nos pudieron dar la memoria que pedimos
    if(buffer == NULL){
        printf("Algo salió mal\n");
        return 1;
    }

    // Leyendo 10 caracteres del archivo y almacenando ese contenido en buffer
    fread(buffer, sizeof(char), 10, archivo);

    // Recorriendo nuestra matriz llamada buffer
    for(int i = 0; i < strlen(buffer); i++){
        // Imprimiendo el caracter en la posición actual
        printf("%c\n", buffer[i]);
    }

    free(buffer);
    fclose(archivo);


}