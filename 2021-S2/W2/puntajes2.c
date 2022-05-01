#include <cs50.h>
#include <stdio.h>

float promedio(int cantidad, int valores[]);

int main(void){

    int cantidad = get_int("Cantidad de puntajes: ");

    int puntajes[cantidad];

    // Rellenar la colección con los puntajes
    for(int i = 0; i < cantidad; i++)
    {

        puntajes[i] = get_int("Puntaje #%i: ", i + 1 );

    }

    printf("Promedio: %.2f\n", promedio(cantidad, puntajes) );

}


float promedio(int cantidad, int valores[]){
    // Calcular la suma de los valores en la colección
    int suma = 0;
    for(int i = 0; i < cantidad; i++){
        suma += valores[i];
    }

    return (float) suma / (float) cantidad;

}