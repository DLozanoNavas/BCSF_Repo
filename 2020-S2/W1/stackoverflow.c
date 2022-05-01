#include <stdio.h>
#include <cs50.h>
#include <string.h>

void HappyLittleFunction();


int main(void){

    for(int i = 0; i < 100 ; i++){

        HappyLittleFunction();

    }
}




// Last In (Ultimo en entrar)
// First out (Primero en salir)

void HappyLittleFunction(){

    for(int i = 0; i < 100 ; i++){

        printf("%i\n",i);
    }

}




