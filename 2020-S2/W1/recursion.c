#include <stdio.h>
#include <cs50.h>

void dibujar(int a);

int main(void){

    int altura = get_int("Altura: ");

    dibujar(altura);

}

void dibujar(int a){

    if(a == 0){
        return;
    }

    dibujar(a - 1);

    for(int i = 0; i < a; i++){
        printf("#");
    }
    printf("\n");
}