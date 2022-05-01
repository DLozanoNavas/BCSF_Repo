#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main()
{
    FILE* file = fopen("agenda.csv", "a");
    if(file == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    string nombre = get_string("Name: ");
    string telefono = get_string("Tel: ");

    fprintf(file, "%s,%s\n", nombre, telefono);

    // IMPORTANTE!!!

    fclose(file);


}