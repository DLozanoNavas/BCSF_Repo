// incluir archivos de estas bibliotecas
#include <math.h>


///////////////////////////////////////////////////////////////////////////////////////////

// Convertir imagen a escala de grises
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //scan through height
    for (int i = 0; i < height; i++)
    {
        //scan through width
        for (int j = 0; j < width; j++)
        {
            //add up the values for red, green, and blue into a float called total.
            float total = image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue;

            //total divided by 3 and rounded creates an int called greyvalue
            int greyvalue = round(total / 3);

            //assign greyvalue to the red, green, and blue.
            image[i][j].rgbtRed = greyvalue;
            image[i][j].rgbtGreen = greyvalue;
            image[i][j].rgbtBlue = greyvalue;

        }
    }

    return;
}

///////////////////////////////////////////////////////////////////////////////////////////

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //scan through height
    for (int i = 0; i < height; i++)
    {
        //scan through width
        for (int j = 0; j < width; j++)
        {
            //Sepia Red parts

            //find redred
            float redred = 0.393 * image[i][j].rgbtRed;

            //find redgreen
            float redgreen = 0.769 * image[i][j].rgbtGreen;

            //find redblue
            float redblue = 0.189 * image[i][j].rgbtBlue;

            //////////////////////////////////////////////////

            //Sepia Green parts

            //find greenred
            float greenred = 0.349 * image[i][j].rgbtRed;

            //find greengreen
            float greengreen = 0.686 * image[i][j].rgbtGreen;

            //find greenblue
            float greenblue = 0.168 * image[i][j].rgbtBlue;

            //////////////////////////////////////////////////

            //Sepia Blue parts

            //find bluered
            float bluered = 0.272 * image[i][j].rgbtRed;

            //find bluegreen
            float bluegreen = 0.534 * image[i][j].rgbtGreen;

            //find blueblue
            float blueblue = 0.131 * image[i][j].rgbtBlue;

            //////////////////////////////////////////////////

            //combine the sepia float parts to make the full sepia int value
            int sepiaRed = round(redred + redgreen + redblue);

            //if sepia red is bigger than 255
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            int sepiaGreen = round(greenred + greengreen + greenblue);

            //if sepia green is bigger than 255
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            int sepiaBlue = round(bluered + bluegreen + blueblue);

            //if sepia blue is bigger than 255
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            //assign sepia to red, green and blue
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }

    return;
}

////////////////////////////////////////////////////////////////////

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //make a copy of the image
    RGBTRIPLE image2[width];

    //scan through height
    for (int i = 0; i < height; i++)
    {
        //scan through width
        for (int j = 0; j < width; j++)
        {
            //copy of image which starts at value at end of array - j to go backwards.
            image2[(width - 1) - j] = image[i][j];
        }

        //scan through the new array
        for (int k = 0; k < width; k++)
        {
            //new array value is combined with original image height array to create new mirrored image.
            image[i][k] = image2[k];
        }

    }

    return;
}

/////////////////////////////////////////////////////////////////////

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //make a copy of the image to store the new values
    RGBTRIPLE image2[height][width];

    ///////////////////////////////////////////////////////////

    //center (Fixed)

    //scan through the center height
    for (int i = 1; i < height - 1; i++)
    {
        //scan through the center width
        for (int j = 1; j < width - 1; j++)
        {
            //combine the red, green and blue totals of the surrounding pixels
            float centerredtotal =
                image[i - 1][j - 1].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed +
                image[i][j - 1].rgbtRed + image[i][j].rgbtRed + image[i][j + 1].rgbtRed +
                image[i + 1][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j + 1].rgbtRed;

            float centergreentotal =
                image[i - 1][j - 1].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen +
                image[i][j - 1].rgbtGreen + image[i][j].rgbtGreen + image[i][j + 1].rgbtGreen +
                image[i + 1][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1][j + 1].rgbtGreen;

            float centerbluetotal =
                image[i - 1][j - 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue +
                image[i][j - 1].rgbtBlue + image[i][j].rgbtBlue + image[i][j + 1].rgbtBlue +
                image[i + 1][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1][j + 1].rgbtBlue;

            //divide by 9 to get average and round
            int centerredblur = (int) round(centerredtotal / 9);
            int centergreenblur = (int) round(centergreentotal / 9);
            int centerblueblur = (int) round(centerbluetotal / 9);

            //give the new value to the center pixels
            image2[i][j].rgbtRed = centerredblur;
            image2[i][j].rgbtGreen = centergreenblur;
            image2[i][j].rgbtBlue = centerblueblur;
        }
    }

    ///////////////////////////////////////////////////////////

    //North border (Fixed)

    //scan through the width
    for (int i = 1; i < width - 1; i++)
    {
        //combine the red, green and blue totals of the surrounding pixels
        float northredtotal =
            image[0][i - 1].rgbtRed + image[0][i].rgbtRed + image[0][i + 1].rgbtRed +
            image[1][i - 1].rgbtRed + image[1][i].rgbtRed + image[1][i + 1].rgbtRed;

        float northgreentotal =
            image[0][i - 1].rgbtGreen + image[0][i].rgbtGreen + image[0][i + 1].rgbtGreen +
            image[1][i - 1].rgbtGreen + image[1][i].rgbtGreen + image[1][i + 1].rgbtGreen;

        float northbluetotal =
            image[0][i - 1].rgbtBlue + image[0][i].rgbtBlue + image[0][i + 1].rgbtBlue +
            image[1][i - 1].rgbtBlue + image[1][i].rgbtBlue + image[1][i + 1].rgbtBlue;

        //divide by 6 to get average and round
        int northredblur = (int) round(northredtotal / 6);
        int northgreenblur = (int) round(northgreentotal / 6);
        int northblueblur = (int) round(northbluetotal / 6);

        //give the new value to the North pixels
        image2[0][i].rgbtRed = northredblur;
        image2[0][i].rgbtGreen = northgreenblur;
        image2[0][i].rgbtBlue = northblueblur;
    }

    ////////////////////////////////////////////////////////////

    //South border (Fixed)

    //scan through the width
    for (int i = 1; i < width - 1; i++)
    {
        //combine the red, green and blue totals of the surrounding pixels
        float southredtotal =
            image[height - 2][i - 1].rgbtRed + image[height - 2][i].rgbtRed + image[height - 2][i + 1].rgbtRed +
            image[height - 1][i - 1].rgbtRed + image[height - 1][i].rgbtRed + image[height - 1][i + 1].rgbtRed;

        float southgreentotal =
            image[height - 2][i - 1].rgbtGreen + image[height - 2][i].rgbtGreen + image[height - 2][i + 1].rgbtGreen +
            image[height - 1][i - 1].rgbtGreen + image[height - 1][i].rgbtGreen + image[height - 1][i + 1].rgbtGreen;

        float southbluetotal =
            image[height - 2][i - 1].rgbtBlue + image[height - 2][i].rgbtBlue + image[height - 2][i + 1].rgbtBlue +
            image[height - 1][i - 1].rgbtBlue + image[height - 1][i].rgbtBlue + image[height - 1][i + 1].rgbtBlue;

        //divide by 6 to get average and round
        int southredblur = (int) round(southredtotal / 6);
        int southgreenblur = (int) round(southgreentotal / 6);
        int southblueblur = (int) round(southbluetotal / 6);

        //give the new value to the South pixels
        image2[height - 1][i].rgbtRed = southredblur;
        image2[height - 1][i].rgbtGreen = southgreenblur;
        image2[height - 1][i].rgbtBlue = southblueblur;
    }

    ////////////////////////////////////////////////////////////

    //West border (Fixed)

    //scan through the height
    for (int i = 1; i < height - 1; i++)
    {
        //combine the red, green and blue totals of the surrounding pixels
        float westredtotal =
            image[i - 1][0].rgbtRed + image[i - 1][1].rgbtRed +
            image[i][0].rgbtRed + image[i][1].rgbtRed +
            image[i + 1][0].rgbtRed + image[i + 1][1].rgbtRed;

        float westgreentotal =
            image[i - 1][0].rgbtGreen + image[i - 1][1].rgbtGreen +
            image[i][0].rgbtGreen + image[i][1].rgbtGreen +
            image[i + 1][0].rgbtGreen + image[i + 1][1].rgbtGreen;

        float westbluetotal =
            image[i - 1][0].rgbtBlue + image[i - 1][1].rgbtBlue +
            image[i][0].rgbtBlue + image[i][1].rgbtBlue +
            image[i + 1][0].rgbtBlue + image[i + 1][1].rgbtBlue;

        //divide by 6 to get average and round
        int westredblur = (int) round(westredtotal / 6);
        int westgreenblur = (int) round(westgreentotal / 6);
        int westblueblur = (int) round(westbluetotal / 6);

        //give the new value to the West pixels
        image2[i][0].rgbtRed = westredblur;
        image2[i][0].rgbtGreen = westgreenblur;
        image2[i][0].rgbtBlue = westblueblur;
    }

    /////////////////////////////////////////////////////////////

    //East border (Fixed)

    //scan through the height
    for (int i = 1; i < height - 1; i++)
    {
        //combine the red, green and blue totals of the surrounding pixels
        float eastredtotal =
            image[i - 1][width - 2].rgbtRed + image[i - 1][width - 1].rgbtRed +
            image[i][width - 2].rgbtRed + image[i][width - 1].rgbtRed +
            image[i + 1][width - 2].rgbtRed + image[i + 1][width - 1].rgbtRed;

        float eastgreentotal =
            image[i - 1][width - 2].rgbtGreen + image[i - 1][width - 1].rgbtGreen +
            image[i][width - 2].rgbtGreen + image[i][width - 1].rgbtGreen +
            image[i + 1][width - 2].rgbtGreen + image[i + 1][width - 1].rgbtGreen;

        float eastbluetotal =
            image[i - 1][width - 2].rgbtBlue + image[i - 1][width - 1].rgbtBlue +
            image[i][width - 2].rgbtBlue + image[i][width - 1].rgbtBlue +
            image[i + 1][width - 2].rgbtBlue + image[i + 1][width - 1].rgbtBlue;

        //divide by 6 to get average and round
        int eastredblur = (int) round(eastredtotal / 6);
        int eastgreenblur = (int) round(eastgreentotal / 6);
        int eastblueblur = (int) round(eastbluetotal / 6);

        //give the new value to the East pixels
        image2[i][width - 1].rgbtRed = eastredblur;
        image2[i][width - 1].rgbtGreen = eastgreenblur;
        image2[i][width - 1].rgbtBlue = eastblueblur;
    }

    //////////////////////////////////////////////////////////////

    //top left corner (Fixed)

    //combine the red, green, and blue totals of the surrounding pixels
    float topleftredtotal =
        image[0][0].rgbtRed + image[0][1].rgbtRed +
        image[1][0].rgbtRed + image[1][1].rgbtRed;

    float topleftgreentotal =
        image[0][0].rgbtGreen + image[0][1].rgbtGreen +
        image[1][0].rgbtGreen + image[1][1].rgbtGreen;

    float topleftbluetotal =
        image[0][0].rgbtBlue + image[0][1].rgbtBlue +
        image[1][0].rgbtBlue + image[1][1].rgbtBlue;

    //divide by 4 to get average and round
    int topleftredblur = (int) round(topleftredtotal / 4);
    int topleftgreenblur = (int) round(topleftgreentotal / 4);
    int topleftblueblur = (int) round(topleftbluetotal / 4);

    //give the new value to top left pixel
    image2[0][0].rgbtRed = topleftredblur;
    image2[0][0].rgbtGreen = topleftgreenblur;
    image2[0][0].rgbtBlue = topleftblueblur;

    //////////////////////////////////////////////////////////////

    //top right corner (Fixed)

    //combine the red, green, and blue totals of the surrounding pixels
    float toprightredtotal =
        image[0][width - 2].rgbtRed + image[0][width - 1].rgbtRed +
        image[1][width - 2].rgbtRed + image[1][width - 1].rgbtRed;

    float toprightgreentotal =
        image[0][width - 2].rgbtGreen + image[0][width - 1].rgbtGreen +
        image[1][width - 2].rgbtGreen + image[1][width - 1].rgbtGreen;

    float toprightbluetotal =
        image[0][width - 2].rgbtBlue + image[0][width - 1].rgbtBlue +
        image[1][width - 2].rgbtBlue + image[1][width - 1].rgbtBlue;

    //divide by 4 to get average and round
    int toprightredblur = (int) round(toprightredtotal / 4);
    int toprightgreenblur = (int) round(toprightgreentotal / 4);
    int toprightblueblur = (int) round(toprightbluetotal / 4);

    //give the new value to top right pixel
    image2[0][width - 1].rgbtRed = toprightredblur;
    image2[0][width - 1].rgbtGreen = toprightgreenblur;
    image2[0][width - 1].rgbtBlue = toprightblueblur;

    ////////////////////////////////////////////////////////////////

    //bottom left corner (Fixed)

    //combine the red, green, and blue totals of the surrounding pixels
    float bottomleftredtotal =
        image[height - 2][0].rgbtRed + image[height - 2][1].rgbtRed +
        image[height - 1][0].rgbtRed + image[height - 1][1].rgbtRed;

    float bottomleftgreentotal =
        image[height - 2][0].rgbtGreen + image[height - 2][1].rgbtGreen +
        image[height - 1][0].rgbtGreen + image[height - 1][1].rgbtGreen;

    float bottomleftbluetotal =
        image[height - 2][0].rgbtBlue + image[height - 2][1].rgbtBlue +
        image[height - 1][0].rgbtBlue + image[height - 1][1].rgbtBlue;

    //divide by 4 to get average and round
    int bottomleftredblur = (int) round(bottomleftredtotal / 4);
    int bottomleftgreenblur = (int) round(bottomleftgreentotal / 4);
    int bottomleftblueblur = (int) round(bottomleftbluetotal / 4);

    //give the new value to top right pixel
    image2[height - 1][0].rgbtRed = bottomleftredblur;
    image2[height - 1][0].rgbtGreen = bottomleftgreenblur;
    image2[height - 1][0].rgbtBlue = bottomleftblueblur;

    //////////////////////////////////////////////////////////////////

    //bottom right corner (Fixed)

    //combine the red, green, and blue totals of the surrounding pixels
    float bottomrightredtotal =
        image[height - 2][width - 2].rgbtRed + image[height - 2][width - 1].rgbtRed +
        image[height - 1][width - 2].rgbtRed + image[height - 1][width - 1].rgbtRed;

    float bottomrightgreentotal =
        image[height - 2][width - 2].rgbtGreen + image[height - 2][width - 1].rgbtGreen +
        image[height - 1][width - 2].rgbtGreen + image[height - 1][width - 1].rgbtGreen;

    float bottomrightbluetotal =
        image[height - 2][width - 2].rgbtBlue + image[height - 2][width - 1].rgbtBlue +
        image[height - 1][width - 2].rgbtBlue + image[height - 1][width - 1].rgbtBlue;

    //divide by 4 to get average and round
    int bottomrightredblur = (int) round(bottomrightredtotal / 4);
    int bottomrightgreenblur = (int) round(bottomrightgreentotal / 4);
    int bottomrightblueblur = (int) round(bottomrightbluetotal / 4);

    //give the new value to top right pixel
    image2[height - 1][width - 1].rgbtRed = bottomrightredblur;
    image2[height - 1][width - 1].rgbtGreen = bottomrightgreenblur;
    image2[height - 1][width - 1].rgbtBlue = bottomrightblueblur;

    ///////////////////////////////////////////////////////////////////

    //scan through image array
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //copy values from duplicate to original
            image[i][j] = image2[i][j];
        }
    }

    return;
}