#include <stdio.h>

int main(){

    int n = 50;

    int i = n;

    int *dir_n = &n;

    int *dir_i = &i;


    printf("%p\n", dir_n);

    printf("%p\n", dir_i);

}