// Tamaño de los tipos de datos con sizeof()
#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("Tamaño de los tipos de datos:");
    printf("char: %lu bytes; es decir, %lu bits.\n", sizeof(char), sizeof(char)*8);
    printf("bool: %lu bytes; es decir, %lu bits.\n", sizeof(bool), sizeof(bool)*8);
    printf("int: %lu bytes; es decir, %lu bits.\n", sizeof(int), sizeof(int)*8);
    printf("float: %lu bytes; es decir, %lu bits.\n", sizeof(float), sizeof(float)*8);
    printf("double: %lu bytes; es decir, %lu bits.\n", sizeof(double), sizeof(double)*8);
    printf("long: %lu bytes; es decir, %lu bits.\n", sizeof(long), sizeof(long)*8);
    printf("string: %lu bytes; es decir, %lu bits.\n", sizeof(string), sizeof(string)*8);
}