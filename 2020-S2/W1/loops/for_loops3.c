// Crea pollitos con funciones y parámetros
#include <stdio.h>
#include <cs50.h>

// La declaración de la función que imprime "Pollito!"
// es "void" porque no devuelve ningún valor
void ImprimirPollitos(int CantidadPollitos);

// La declaración de la función que pregunta cuántos pollitos
// es "int" porque devuelve un entero... La cantidad de pollitos!
int ObtenerNumeroDePollitos();

// Puerta de entrada de nuestra aplicación
int main(void){

    ImprimirPollitos(ObtenerNumeroDePollitos());

}

// Implementación de la Función ObtenerNumeroDePollitos
int ObtenerNumeroDePollitos(){

    return get_int("¿Cuántos Pollitos?\n");
}

// Implementación de la función ImprimirPollitos
void ImprimirPollitos(int CantidadPollitos){

    for (int i=0; i < CantidadPollitos; i++){

        printf("Pollito!\n");
    }
}