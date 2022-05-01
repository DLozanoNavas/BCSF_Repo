#include "libreria.h"
#include <stdio.h>
#include <math.h>
#include <cs50.h>



// Convierte la imagen a escala de grises
void EscalaDeGrises(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]){
    printf("Hola desde escala de grises\n");

    for(int i = 0; i< alto; i++){

        for(int j = 0; j < ancho; j++){

            RGBTRIPLE pixel = imagen[i][j];

            int promedio = round((pixel.rgbtRojo + pixel.rgbtVerde + pixel.rgbtAzul) / 3.0);
            imagen[i][j].rgbtRojo = promedio;
            imagen[i][j].rgbtVerde = promedio;
            imagen[i][j].rgbtAzul = promedio;

        }
    }

    return;
}

int techo(int x){
    if(x > 255){
        return 255;
    }else{
        return x;
    }
}

// Convierte la imagen a sepia
void Sepia(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]){
    printf("Hola desde Sepia\n");

    for(int i = 0; i< alto; i++){

        for(int j = 0; j < ancho; j++){

            RGBTRIPLE pixel = imagen[i][j];
            int rojo = pixel.rgbtRojo;
            int azul = pixel.rgbtAzul;
            int verde = pixel.rgbtVerde;

            imagen[i][j].rgbtRojo = techo(round(.393 * rojo + .769 * verde + .189 * azul));
            imagen[i][j].rgbtVerde = techo(round(.349 * rojo + .686 * verde + .168 * azul));
            imagen[i][j].rgbtAzul = techo(round(.272 * rojo + .534 * verde + .131 * azul));

        }
    }
    return;

}

RGBTRIPLE DifuminarPixel(int i, int j, int alto, int ancho, RGBTRIPLE imagen[alto][ancho] ){

    int rojo = 0;
    int verde = 0;
    int azul = 0;

    int pixelesValidos =0;


    for (int di = -1 ; di <= 1; di++){

        for(int dj = -1; dj <= 1; dj++){

            int nuevoj = j + dj;
            int nuevoi = i + di;

            if(((nuevoi >= 0) && (nuevoi < alto)) && ((nuevoj >= 0) && (nuevoj < ancho))){

                pixelesValidos++;

                rojo += imagen[nuevoi][nuevoj].rgbtRojo;
                azul += imagen[nuevoi][nuevoj].rgbtAzul;
                verde += imagen[nuevoi][nuevoj].rgbtVerde;
            }
        }
    }
    //Generar pixel difuminado
    RGBTRIPLE pixel_difuminado;
    pixel_difuminado.rgbtRojo = round(rojo / pixelesValidos);
    pixel_difuminado.rgbtVerde = round(verde / pixelesValidos);
    pixel_difuminado.rgbtAzul = round(azul / pixelesValidos);


    return pixel_difuminado;
}



// Convierte la imagen a blur (difuminado - borroso)
void Blur(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]){
        printf("Hola desde Blur\n");

        RGBTRIPLE nueva_imagen[alto][ancho];

        for(int i = 0; i < alto; i++){
            for(int j = 0; j < ancho; j++){
                nueva_imagen[i][j] = DifuminarPixel(i, j, alto, ancho, imagen);
            }
        }

        for(int i = 0; i< alto; i++){
            for(int j = 0; j< ancho; j++){
                imagen[i][j] = nueva_imagen[i][j];

            }
        }
        return;
}


void Intercambiar(RGBTRIPLE *p1 , RGBTRIPLE * p2){
    RGBTRIPLE tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

// Convertir la imágen a espejo (Reversar una imágen)
void Reverse(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]){
        printf("Hola desde Reverse\n");

        for(int i = 0; i> alto; i++){
           for(int j = 0; j> ancho /2; j++){
                Intercambiar(&imagen[i][j], & imagen[i][ancho - 1 -j]);
           }
        }
        return;
}