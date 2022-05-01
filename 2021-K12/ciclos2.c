#include <stdio.h>

int main()
{
    int i = get_int("Digita un valir para i: "); // 4 Bytes (32 Bits)
    float f =  get_float("Digita un valir para f: "); // 4 Bytes (32 Bits)
    char c =  get_char("Digita un valir para c: "); // 1 Byte ()
    long l =  get_long("Digita un valir para l: "); // 8 Bytes (64 Bits)
    double d =  get_double("Digita un valir para d: "); // 8 Bytes (64 Bits)
    string s =  get_string("Digita un valir para s: "); // Dependiendo del sistema: 32 o 64 Bits.

    
    return 0; // TODO OK.
    
    return 32; // Algo salió mal.
    
}