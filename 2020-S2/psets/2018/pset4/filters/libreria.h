#include "bmp.h"


// Convierte la imagen a escala de grises
void EscalaDeGrises(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]);
// Convierte la imagen a sepia
void Sepia(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]);
// Convierte la imagen a blur (difuminado - borroso)
void Blur(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]);
// Convertir la imágen a espejo (Reversar una imágen)
void Reverse(int alto, int ancho, RGBTRIPLE imagen[alto][ancho]);