#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[]){

    char *s = "Emma";

    char *n = "Emma";

    printf("El primer caracter de s está en: %p\n", s);
    printf("El primer caracter de n está en: %p\n", n);

    if(n == s){
        printf("Iguales\n");
    }else{
        printf("Diferentes\n");
    }

}