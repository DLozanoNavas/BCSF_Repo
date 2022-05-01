#include <cs50.h>
#include <stdio.h>

bool triangulo_valido(float x, float y, float z);

int main()
{
    float a, b, c;

    a = get_float("a: ");
    b = get_float("b: ");
    c = get_float("c: ");


    bool valido = triangulo_valido(a, b, c);

    if(valido == true){
        printf("El triángulo es válido\n");
    } else {
        printf("El triángulo NO es válido. :( \n");
    }

    return 0;

}

bool triangulo_valido(float x, float y, float z)
{
    // 1. Chequear que TODOS los lados son positivos
    if (x <= 0 || y <= 0 || z <= 0 ){
        return false;
    }


    // 2. Chequear la suma de los lados
    if( x + y <= z || x + z <= y || y+z <= x){

        return false;
    }

    // 3. Revolver verdadero o falso si podemos crear el triángulo
    return true;

}