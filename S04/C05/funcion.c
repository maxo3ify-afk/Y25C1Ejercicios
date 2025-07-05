#include <stdio.h>
#include <cs50.h>

int suma(int x, int y);
void intercambio(int x, int y);

int main(void){
    int numero1, numero2;
    numero1 = get_int("Digite el primer numero a sumar: ");
    numero2 = get_int("Digite el segundo numero a sumar: ");
    int s = suma(numero1,numero2);
    intercambio(numero1,numero2);
    printf("La suma es: %d\n",s);
    printf("El valor de numero1: %d \nEl valor de numero2: %d",numero1,numero2);
    printf("%d\n",tmp);
}

int suma(int x, int y){
    int suma = 0;
    suma = x + y;
    return suma;
}

void intercambio(int x, int y){
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
    printf("El valor de x es: %d\nEl valor de y es: %d",x,y);
}
