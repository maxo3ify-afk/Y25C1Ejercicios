#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0.1;
    float suma = 0;

    for (int i = 0; i < 10; i++)
    {
        suma = suma + a;
    }

    printf("%.2f\n", suma);

    suma = round(suma);

    printf("%.2f\n", suma);

    if( suma == 1.0)
    {
        printf("igaules\n");
    }
    else
    {
        printf("Diferente\n");
    }
}
