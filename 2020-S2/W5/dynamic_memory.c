#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int One();
int Two();
int Tree();

int main(){

    //int x = get_int("¿Cuántos floats quieres en tu matriz estática?: ");

    // float matriz_floats[x];

    printf("%i\n", One());


}

int One(){
    int y = 0;
    return Two();
}

int Two(){
    return Tree();
}

int Tree(){
    return 3;
}

