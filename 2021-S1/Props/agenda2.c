#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct {

    string Nombre;
    string Apellido;
    string Telefono;
    int Edad;
    int CodigoEtudiante;
    long NumeroDeCuenta;
    string CorreoElectronico;

} Persona;

int main(void){

    Persona Daniel;
    
    Daniel.Nombre = "Daniel";
    Daniel.Apellido = "Lozano";

    Persona personas[4]; 

    personas[0].Edad = 25;
    personas[0].Nombre = "Daniel";
    personas[0].Telefono = "320-999-6625";


    personas[1].Edad = 18;
    personas[1].Nombre = "Camilo";
    personas[1].Telefono = "311-565-8456";


    personas[2].Edad = 45;
    personas[2].Nombre = "Emma";
    personas[2].Telefono = "325-555-5556";


    personas[3].Edad = 20;
    personas[3].Nombre = "Sara";
    personas[3].Telefono = "320-888-8881";


    string nombre_a_buscar = get_string("¿Qué nombre quieres buscar?");



    // implementar busqueda lineal (linear search)
    for (int i = 0; i < 4; i++){

        // Chequear si Emma está en la lista

        // igual va a contener un 0 si strcmp devuelve verdadero. (si = 0) (no = 1)
        int encontrado = strcmp(personas[i].Nombre, nombre_a_buscar);

        if(encontrado == 0){
            // Si llegamos acá, Emma está en la lista
            printf("%s está en la lista!\n", personas[i].Nombre);
            printf("Numero: %s", personas[i].Telefono);

            return 0;

        }
    }

    printf("No está en la lista.\n");
    return 1;


}