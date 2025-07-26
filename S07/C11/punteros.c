#include <stdio.h>

int main(void){
    int n = 50;
    int *p = &n;

    printf("La direccion de memoria es: %p \n",p);
    printf("El valor al que apunta es: %d \n", *p);
}
