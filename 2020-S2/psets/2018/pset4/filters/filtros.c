#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include <getopt.h>

// USO: ./filtros [esbr] ARCHIVO_ENTRADA ARCHIVO_SALIDA

int main(int argc, char* argv[]){

    for(int i = 0; i < argc ; i++){
        printf("%i: %s\n",i, argv[i]);
    }

    char* filtros_validos = "esbr";

    char filtro_a_aplicar = getopt(argc, argv, filtros_validos );

    if(filtro_a_aplicar == '?'){
        printf("Filtro inválido. Selecciona uno solo entre [esbr].\n");
    }



    char* nombre_arch_entrada = argv[2];
    char* nombre_arch_salida = argv[3];

    FILE* imagen_entrada = fopen(argv[2], "r");
    if(imagen_entrada == NULL){
        printf("Imagen de entrada no encontrada.\n");
        return 1;
    }

    FILE* imagen_salida = fopen(argv[3], "w");
    if(imagen_salida == NULL){
        printf("Imagen de salida no pudo ser creada.\n");
        return 1;
    }


    // Crear cabecera de archivo
    BITMAPFILEHEADER BitMapFileHeader;

    // Crear cabecera de información
    BITMAPINFOHEADER BitMapInfoHeader;

    // Leer y llenar la cabecera de archivo
    fread(&BitMapFileHeader, sizeof(BITMAPFILEHEADER), 1, imagen_entrada);

    // Leer y llenar la cabecera de información
    fread(&BitMapInfoHeader, sizeof(BITMAPINFOHEADER), 1, imagen_entrada);


    //if (BitMapFileHeader.bfType != 0x4d42 || BitMapFileHeader.bfOffBits != 54 || BitMapInfoHeader.biSize != 40 ||
    //    BitMapInfoHeader.biBitCount != 24 || BitMapInfoHeader.biCompression != 0)
    //{
    //fclose(imagen_entrada);
    //fclose(imagen_salida);
    //printf("ARCHIVO DE ENTRADA NO SOPORTADO.\n");
    //return 6;
    //}


    // x = -1
    // |x| = 1
    int alto = abs(BitMapInfoHeader.biHeight);
    int ancho = abs(BitMapInfoHeader.biWidth);

    // Crear suficiente espacio en la memora para almacenar la imagen
    RGBTRIPLE (*imagen)[ancho] = calloc(alto, ancho * sizeof(RGBTRIPLE));
    if(imagen == NULL){
        printf("No hay memoria suficiente.");
        fclose(imagen_entrada);
        fclose(imagen_salida);
        return 1;
    }


    int relleno = (4 - (ancho * sizeof(RGBTRIPLE) )% 4) % 4;

    for(int i = 0; i < alto; i++){
        fread(imagen[i], sizeof(RGBTRIPLE), ancho, imagen_entrada);
        // Saltando el relleno
        fseek(imagen_entrada, relleno, SEEK_CUR);
    }

    switch(filtro_a_aplicar){
        case 'e':
            EscalaDeGrises(1,11,imagen);
            break;
        case 's':
            Sepia(1,11,imagen);
            break;
        case 'b':
            Blur(1,11,imagen);
            break;
        case 'r':
            Reverse(1,11,imagen);
            break;
    }

    // Copiando cabecera del archivo
    fwrite(&BitMapFileHeader, sizeof(BITMAPFILEHEADER), 1, imagen_salida);

    // Copiando cabecera de info de la imágen
    fwrite(&BitMapInfoHeader, sizeof(BITMAPINFOHEADER), 1, imagen_salida);

    for(int i = 0; i < alto; i++){
        fwrite(imagen[i], sizeof(RGBTRIPLE), ancho, imagen_salida );

        for(int j = 0; j < relleno; j++){
            fputc(0x00, imagen_salida );
        }
    }


    free(imagen);

    fclose(imagen_entrada);

    fclose(imagen_salida);


    return 0;

}