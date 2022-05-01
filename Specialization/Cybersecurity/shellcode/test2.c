#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main( int argc, char *argv[] )
{

    // Crear un archivo
    FILE* archivo = fopen("ls.txt", "a");

    if(!archivo){
        printf("No se encontró el archivo.\n");
        return 1;
    }

    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("/bin/ls /etc/", "r");

    if (fp == NULL) {
        printf("Failed to run command\n" );
        exit(1);
    }

    /* Read the output a line at a time - output it. */
    while (fgets(path, sizeof(path), fp) != NULL) {
        fprintf(archivo, "%s", path);
    }

    /* close */
    pclose(fp);

    // Cerrar archivo
    fclose(archivo);

    return 0;
}