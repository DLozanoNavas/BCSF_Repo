#include <stdio.h>
#include <cs50.h>

int main(){
    
    string respuesta = get_string("¿Cómo te llamas?");
    
    printf("¡Hola %s!\n", respuesta  );
}