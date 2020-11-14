#include <stdio.h>

int main(int argc, char * argv[]){

    // Identificar si nos pasaron el nombre de un archivo
    if(argc != 2){
        printf("Digita el nombre de un archivo.\n");
        return 1;
    }


    // Abrir un archivo
    FILE* archivo = fopen(argv[1], "r");
    if(!archivo){
        printf("Archivo no existe\n");
    }

    // Los creadores del formato JPEG decidieron que
    // si los primeros tres bytes de un archivo son 0xff, 0xd8, 0xff
    // el archivo, probablemente es un JPEG

    unsigned char bytes[3];

    fread(bytes, 3, 1, archivo);

    if( bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff){
        printf("El archivo probablemente es un JPEG.\n");
    }else{
        printf("El archivo definitivamente no es un JPEG.");
    }

}