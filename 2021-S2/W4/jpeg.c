#include <stdio.h>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("Uso: ./jpeg <nombre_archivo>\n ");
        return 1;
    }

    FILE* archivo = fopen(argv[1], "r");
    if(archivo == NULL)
    {
        printf("Error abriendo archivo %s\n", argv[1]);
        return 1;
    }

    // Resulta que los desarroladores del formato JPEG decidieron que si los primeros
    // 3 Bytes de un archivo son respectivamente: 0xff, 0xd8 y 0xff, el archivo,
    // probablemente es un JPEG
    unsigned char bytes[3];

    fread(bytes, 3, 1, archivo);

    if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("El archivo probablemente es un JPEG.\n");
    }
    else
    {
        printf("El archivo DEFINITIVAMENTE no es un JPËG.\n");
    }

    fclose(archivo);
}