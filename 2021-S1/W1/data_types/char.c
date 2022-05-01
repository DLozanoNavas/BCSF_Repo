#include <stdio.h>
#include <cs50.h>


// Preguntar al usuario si acepta los términos y condiciones
int main(void){

    // Declaramos una variable de tipo char que actualmente contiene un espacio
    // Esta variable va a contener la respuesta del usuario cuando preguntemos si acepta
    // Un char debe contener 1 caracter, por lo que usar '' (no poner espacio) fallaría
    char respuesta = ' ';


    // Mientras respuesta no sea igual a 'S' y respuesta no sea igual a 's'

    while (respuesta != 'S' && respuesta != 's') {

        // Preguntamos al usuario si acepta los términos y condiciones
        // y almacenamos el valor en la variable respuesta

        respuesta = get_char("¿Aceptas los términos y condiciones del servicio? (S/N): ");

        // verificamos que el caracter que el usuario entregó mediante get_char,
        // el cual almacenamos en la variable respuesta

        if ( respuesta == 'S' || respuesta == 's' ){
            // si el valor que el usuario le asignó a respuesta mediante la función get_char
            // es igual a 'S' o es igual a 's', imprimiremos que el usuario aceptó.
            printf("El usuario aceptó.\n");
            // Salimos del While Loop
            break;

        } else if(respuesta == 'N' || respuesta == 'n') {
            // si el valor que el usuario le asignó a respuesta mediante la función get_char
            // es igual a 'N' o es igual a 'n', imprimiremos que el usuario no aceptó.
            printf("El usuario no aceptó.\n");
            // Salimos del While Loop
            break;

        } else {
            printf("No hemos reconocido la respuesta.\n");
        }

    }
    // Llegamos al final de nuestra función main, con lo que finaliza nuestro programa
    printf("Ejecución completada.\n");
}