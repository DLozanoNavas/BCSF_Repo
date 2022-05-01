#include <cs50.h>
#include <stdio.h>

void DecirHola(string nombre);

int PreguntarEdad();

void ImprimirEdad(int edadUsuario);

int main()
{
    while(1 == 1)
    {
        DecirHola(get_string("¿Cuál es tu nombre? "));
    
        ImprimirEdad(PreguntarEdad());
    }

    return 0;
}

void DecirHola(string nombre)
{
    printf("Hola, %s \n", nombre);
}

int PreguntarEdad()
{
    return get_int("¿Cuántos años tienes?");
}

void ImprimirEdad(int edadUsuario){
    printf("Tienes: %i años.\n", edadUsuario);
    printf("Tienes: %i meses.\n",edadUsuario * 12 );
    printf("Tienes: %i días.\n", edadUsuario * 365 );
    printf("Tienes: %i horas.\n", edadUsuario * 365 * 24 );
    printf("Tienes: %i Minutos.\n", edadUsuario * 365 * 24 * 60 );
    printf("Tienes: %i Segundos.\n", edadUsuario * 365 * 24 * 60 * 60 );
}
