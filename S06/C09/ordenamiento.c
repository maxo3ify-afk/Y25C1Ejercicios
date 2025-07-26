#include <stdio.h>

void seleccionSort(int arr[], int n);

void imprimirArreglo(int arr[], int n);

int main(void)
{
    int arreglo[] = {64, 25, 12, 22, 11};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);

    printf("Arreglo original: \n");
    imprimirArreglo(arreglo,n);

    seleccionSort(arreglo,n);

    printf("Arreglo ordenado: \n");
    imprimirArreglo(arreglo,n);


    return 0;
}

void imprimirArreglo(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void seleccionSort(int arr[], int n)
{
    int minIndex, temp;
    for(int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
