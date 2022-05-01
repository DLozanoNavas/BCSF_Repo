#include <stdio.h>


int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("Debes definir el nombre de un archivo.\n");
        return 1;
    }

    FILE* archivo = fopen(argv[1], "r");
    if(archivo == NULL)
    {
        printf("Error al tratar de encontar el archivo.\n");
        return 1;
    }


    // Si llegamos hasta acá, tenemos el archivo en memoria.

    // Hacer lo que queramos con nuestro archivo.
    char caracter;

    while ( (caracter = fgetc(archivo)) != EOF )
    {
        printf("%c", caracter);
    }


    // Cerrar el archivo
    fclose(archivo);

}