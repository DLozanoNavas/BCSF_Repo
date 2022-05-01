#include <stdio.h>
#include <cs50.h>
#include <math.h>

float sumar_dos_numeros(float a, float b);

float restar_dos_numeros(float a, float b);

float multiplicar_dos_numeros(float a, float b);

float dividir_dos_numeros(float a, float b);

void imprimir_resultado(float valor_a_imprimir);

int main(void){

    printf("Bienvenid@ a la calculadora:\n");

    int operacion_escogida = get_int("Digite sumar (1), restar(2), multiplicar(3), dividir (4): ");

    float numero1 = get_float("Digite el numero 1: ");

    float numero2 = get_float("Digite el numero 2: ");

    float resultado;

    if (operacion_escogida == 1){

        resultado = sumar_dos_numeros(numero1, numero2);

        imprimir_resultado(resultado);

    } else if(operacion_escogida == 2){

        resultado = restar_dos_numeros(numero1, numero2);

        imprimir_resultado(resultado);

    } else if(operacion_escogida == 3){

        resultado = multiplicar_dos_numeros(numero1, numero2);

        imprimir_resultado(resultado);


    } else if(operacion_escogida == 4){

        resultado = dividir_dos_numeros(numero1, numero2);

        imprimir_resultado(resultado);


    } else{

        printf("No digitaste una operación soportada.\n");
    }

}

float sumar_dos_numeros(float a, float b){
    return a + b;
}

float restar_dos_numeros(float a, float b){
    return a - b;
}

float multiplicar_dos_numeros(float a, float b){
    return a * b;
}

float dividir_dos_numeros(float a, float b){
    return a / b;
}

void imprimir_resultado(float valor_a_imprimir){
    printf("El resultado es: %f\n", valor_a_imprimir);
}