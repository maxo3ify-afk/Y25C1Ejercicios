#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[], int n);

int main(void)
{
    int numeros[5] = {8, 10, 3, 1, 48};

    printf("Arreglo original \n");

    int n = sizeof(numeros);
    n = n / sizeof(numeros[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%i ", numeros[i]);
    }

    bubble_sort(numeros, n);

    printf("\nArreglo ordenado\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numeros[i]);
    }
    printf("\n");


}

void bubble_sort(int array[], int n)
{
    bool bandera;
    do
    {
        bandera = false;
        for (int i = 0; i < n-1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
                bandera = true;
            }
        }
        if (bandera == false)
        {
            break;
        }
        n--;
    }
    while(n != 0);
}
