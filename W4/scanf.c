#include <stdio.h>

int get_int(char *pregunta);

int main(){

    // Implementar get_int
    int x = get_int("Digite el valor de x");

    printf("El usuario tipeo: %i\n", x);
}

int get_int(char *pregunta){

    int x;

    printf("%s ", pregunta);

    scanf("%i", &x);

    return x;
}