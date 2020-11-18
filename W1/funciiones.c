#include <stdio.h>
#include <cs50.h>

void calcular_impuesto(string nombre_impuesto, double precio_producto, float tarifa_impuesto);

int main(){

    calcular_impuesto("IVA", 100, 0.19);

}


void calcular_impuesto(string nombre_impuesto, double precio_producto, float tarifa_impuesto) {

    printf("El impuesto %s para %f es: %f\n", nombre_impuesto, precio_producto, precio_producto * tarifa_impuesto);

}