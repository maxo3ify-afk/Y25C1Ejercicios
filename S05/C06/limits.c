#include <cs50.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int a = UINT_MAX;
    a = a+2;

   unsigned char r = 63;
    printf("%c\n", r);

    printf("%u\n", a);
    //a = a +1;
    printf("El valor minimo de una varaible int es de: %i\n y el valo maximo es de: %i", INT_MIN, INT_MAX);
}
