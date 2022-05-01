// get_int y printf con %i

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int edad = get_int("¿Cuántos años tienes? ");
    printf("Tienes al menos %i días de edad.\n", edad * 365);
}
