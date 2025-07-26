#include <cs50.h>
#include <stdio.h>

int suma(int a, int b);

int z = 10;

int main(void){
    int x = 5;
    int y = 10;
    int sumar = suma(x, y);
    printf("La variable z tiene el valor de %d\n", z);
    printf("La suma es %d\n", sumar);
}

int suma(int a, int b)
{
    return a + b;
}


