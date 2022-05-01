#include <stdio.h>
#include <cs50.h>

int main()
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if(i != j)
    {
        printf("Diferentes!\n");
    }
    else
    {
       printf("Iguales\n");
    }
}