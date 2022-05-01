#include <stdio.h>
#include <cs50.h>
int main()
{
    int i = get_int("Digita un valor para i: "); // 4 Bytes (32 Bits)
    float f =  get_float("Digita un valor para f: "); // 4 Bytes (32 Bits)
    char c =  get_char("Digita un valor para c: "); // 1 Byte ()
    long l =  get_long("Digita un valor para l: "); // 8 Bytes (64 Bits)
    double d =  get_double("Digita un valor para d: "); // 8 Bytes (64 Bits)
    string s =  get_string("Digita un valor para s: "); // Dependiendo del sistema: 32 o 64 Bits.

    printf("i: %i\n",i);
    printf("f: %f\n",f);
    printf("c: %c\n",c);
    printf("l: %li\n",l);
    printf("d: %f\n",d);
    printf("s: %s\n",s);

}