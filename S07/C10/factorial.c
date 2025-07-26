#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int numero = get_int("Ingrese un numero positivo  ");

    int resultado = factorial(numero);

    printf("El factorial de %i es %d\n", numero, resultado);

}

int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
