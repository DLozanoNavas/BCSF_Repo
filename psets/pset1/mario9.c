#include <stdio.h>
#include <cs50.h>

int main(){

    int n1 = 4;

    int n2 = 3;

    int n3 = 2;


    for(int i = 0; i< n1; i++){

        printf("Hola desde el forloop mayor.\n");

        for (int j = 0; j < n2; j++){

            printf("Hola desde el forloop de en medio.\n");

            for(int m = 0; m < n3 ; m++){
                printf("Hola desde el forloop del interior.\n");
            }
        }

    }



}