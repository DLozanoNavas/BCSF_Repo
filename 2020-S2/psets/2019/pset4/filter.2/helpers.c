#include "helpers.h"
#include <math.h>
#include <cs50.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
        printf("Hola desde escala de grises\n");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //take average of rgb
            RGBTRIPLE pixel = image[i][j];
            int average = round((pixel.rgbtRed + pixel.rgbtGreen + pixel.rgbtBlue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

//to cap value at 255
int cap(int value)
{
    return (value > 255 ? 255 : value);
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
        printf("Hola desde Sepia\n");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //formula given
            RGBTRIPLE pixel = image[i][j];
            int originalRed = pixel.rgbtRed;
            int originalGreen = pixel.rgbtGreen;
            int originalBlue = pixel.rgbtBlue;
            image[i][j].rgbtRed = cap(round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue));
            image[i][j].rgbtGreen = cap(round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue));
            image[i][j].rgbtBlue = cap(round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue));

        }
    }
    return;
}

//to swap the values
void swap(RGBTRIPLE *p1, RGBTRIPLE *p2)
{
    RGBTRIPLE temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
            printf("Hola desde Reverse\n");

    for (int i = 0; i < height; i++)
    {
        //loop till mid value
        for (int j = 0; j < width / 2; j++)
        {
            //we swap pixels
            swap(&image[i][j], & image[i][width - 1 - j]);
        }
    }
    return;
}

//check pixel constraints
bool is_valid_pixel(int i, int j, int height, int width)
{
    return i >= 0 && i < height && j >= 0 && j < width;
}

//taking 9 pixels
RGBTRIPLE get_blurred_pixel(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    int redValue = 0, blueValue = 0, greenValue = 0;
    int numOfValidPixels = 0;
    //di is change in i
    for (int di = -1; di <= 1; di++)
    {
        //dj is change in j
        for (int dj = -1; dj <= 1; dj++)
        {
            int new_i = i + di;
            int new_j = j + dj;
            if (is_valid_pixel(new_i, new_j, height, width))
            {
                numOfValidPixels++;
                redValue += image[new_i][new_j].rgbtRed;
                blueValue += image[new_i][new_j].rgbtBlue;
                greenValue += image[new_i][new_j].rgbtGreen;
            }
        }
    }
    //generating blurred pixel
    RGBTRIPLE blurred_pixel;
    blurred_pixel.rgbtRed = round((float) redValue / numOfValidPixels);
    blurred_pixel.rgbtGreen = round((float) greenValue / numOfValidPixels);
    blurred_pixel.rgbtBlue = round((float) blueValue / numOfValidPixels);

    return blurred_pixel;
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
            printf("Hola desde Blur\n");

    //blur in another image and then copy to original
    RGBTRIPLE new_image[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //blurring pixels of copy
            new_image[i][j] = get_blurred_pixel(i, j, height, width, image);
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // pasting copy pixel to original pixel
            image[i][j] = new_image[i][j];
        }
    }
    return;
}
