#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    FILE* archivo = fopen("agenda.csv", "a");
    if(archivo == NULL)
    {
        printf("Error abriendo el archivo.\n");
        return 1;
    }

    char* nombre = get_string("Nombre: ");

    char* numero = get_string("Numero: ");

    fprintf(archivo, "%s,%s\n", nombre, numero  );

    fclose(archivo);
}