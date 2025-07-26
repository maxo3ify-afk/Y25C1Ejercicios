#include <stdio.h>

void swap(int *a, int *b);

int main(void){
    int a =50, b = 100;

    printf("Valor de a: %d Valor de b: %d \n",a,b);
    swap(&a,&b);
    printf("Valor de a: %d Valor de b: %d \n",a,b);
}

void swap(int *a, int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
