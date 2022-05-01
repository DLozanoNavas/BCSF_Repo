#include <stdio.h>
#include <cs50.h>

int main(void){

    float precio = get_float("Precio: ");
    int cantidad = get_int("Cantidad: ");

    float iva = 0;
    float total = 0;

    for (int i = 0; i < cantidad ; i++){

        iva += (precio * 0.19);
        total += precio + iva;
    }

    printf("Precio: %f\n", precio * cantidad);
    printf("IVA Total: %f\n", iva);
    printf("Precio: %f\n", precio * cantidad + iva);


}