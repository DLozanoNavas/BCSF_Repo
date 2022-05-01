#include <stdio.h>

int main()
{
    int n = 50;
    int* p = &n;

    printf("%i está en la posición %p\n", n, p);

    // Probar que un puntero es una variable
    
    int y = 60;
    p = &y;
    
    printf("%i está en la posición %p\n", y, p);

}