#include <stdio.h>

void DibujarFila(int cantidadBloques);

int main()
{
    DibujarFila(500);
}

void DibujarFila(int cantidadBloques){

    if(cantidadBloques != 0 ){
       DibujarFila(cantidadBloques - 1);
    }

    for(int i = 0; i < cantidadBloques; i++){

        printf("# ");
    }
    printf("\n");

}