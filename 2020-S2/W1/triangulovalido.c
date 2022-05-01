#include <stdio.h>
#include <cs50.h>

bool triangulo_valido(float a, float b, float c);

int main(){

     float a, b, c;

     a = get_float("a: ");
     b = get_float("b: ");
     c = get_float("c: ");

    bool es_valido = triangulo_valido(a , b , c);

     if ( es_valido ){

         printf("El triángulo es valido.\n");

     } else {

         printf("El triángulo NO es válido.\n");

     }



}


bool triangulo_valido(float a, float b, float c){

    // todos los lados deben der positivos

    if (a <= 0 || b <= 0 || c <= 0){

        return false;
    }

    // Evaluando si la suma de dos lados siempre es mayor al tercer lado.

    if (a + b <= c || a+c <= b || b + c <= a){

        return false;

    }

    return true;

}


