#include <stdio.h>



int main(int argc, char* argv[]){

    if(argc != 2){
        printf("Debe digitar el nombre del archivo a escanear.\n");
        return 1;
    }

    FILE* archivo = fopen(argv[1], "r");

    if(!archivo){
        printf("El archivo %s no existe o no se pudo abrir.\n", argv[1]);
        return 1;
    }


    unsigned char bytes[3];
    // 1. Espacio para guardar bytes
    // 2. Cuántos bytes queremos leer del archivo
    // 3. Cuántas veces quiero leer esos bytes
    // 4. De qué archivo quiero leer eso bytes
    
    fread(bytes, 3, 1, archivo);


    // Los creadores del formato JPEG decidieron algún día que si los 3 primeros bytes del archi
    // eran respectivamente 0xff, 0xd8, 0xff
    if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff){
        printf("Quzás es un JPEG\n");
    }else{
        printf("Definitivamente no es un JPEG:\n");
    }


}