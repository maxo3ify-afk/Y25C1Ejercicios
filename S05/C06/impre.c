#include <cs50.h>
#include <stdio.h>

int main()
{
    float a = 0.5;
    float b = 0.1;
    float c = a + b;

    printf("%.20f\n", c);

    if (c == 0.6)
    {
        printf("Son iguales");
    }
    else
    {
        printf("diferente");
    }

}
