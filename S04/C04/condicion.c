#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int edad = get_int("Ingrese su edad ");

    if (edad != 16)
    {
        printf("Ya puedes votar\n");
    }
    else
    {
        printf("No tienes la edad suficiente \n");
    }
}
