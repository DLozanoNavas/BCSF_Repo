#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[]){

    char *s = get_string("s: ");
    char *n = get_string("n: ");

    if(s == n){
        printf("Iguales\n");
    }else{
        printf("Diferentes\n");
    }


}