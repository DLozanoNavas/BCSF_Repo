#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string Pais;
    string Linea1;
    string CodigoPostal;
    string Ciudad;
}
direccion;


typedef struct
{
    int edad;
    string Nombre;
    string Telefono;
    direccion Direccion;
}
persona;


int main()
{
    persona personas[3];

    personas[0].edad = 20;
    personas[0].Nombre = "Daniel Lozano";
    personas[0].Telefono = "+573209995554";
    personas[0].Direccion.Pais = "Colombia";


    personas[1].edad = 18;
    personas[1].Nombre = "YHON TORRES";
    personas[1].Telefono = "+3204567845";
    personas[1].Direccion.Pais = "Colombia";


    personas[2].edad = 15;
    personas[2].Nombre = "JOSEPH MEDINA";
    personas[2].Telefono = "+456112544";
    personas[2].Direccion.Pais = "Estados Unidos";


    string busqueda = get_string("Numero: ");

    for(int i = 0; i < 3; i++){

        if(strcmp(personas[i].Telefono, busqueda) == 0)
        {
            printf("%s: %s. Pais: %s\n", personas[i].Nombre, personas[i].Telefono, personas[i].Direccion.Pais);
            return 0;
        }
    }

    printf("No encontrado\n");
    return 1;


}