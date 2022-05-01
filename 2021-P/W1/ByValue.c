#include <stdio.h>

void set_int(int x);
void set_array(int array[5]);

int main()
{
    int a = 5;
    set_int(a);
    printf("a: %i\n", a);
    
    int n[] = {5,3,4,5,3};
    set_array(n);
    printf("n[0]: %i\n", n[0]);
    
}


void set_int(int x)
{
    x = 10;
}


void set_array(int array[5])
{
    array[0] = 10;
}