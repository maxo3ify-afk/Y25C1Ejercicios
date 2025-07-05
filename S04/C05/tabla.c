#include <stdio.h>
#include <cs50.h>

int main(void){
    int numero, iterador = 0;
    numero = get_int("Digite el numero a multiplicar: ");
    printf("Tabla creada con ciclo for\n");
    for(int i = 1; i < 13 ; i++ )
    {
        printf(" %d * %d = %d\n",numero,i,numero*i);
    }
     printf("Tabla creada con while for\n");
     while(iterador < 13)
     {
        printf(" %d * %d = %d\n",numero,iterador,numero*iterador);
        iterador++;
     }
    return 0;
}
