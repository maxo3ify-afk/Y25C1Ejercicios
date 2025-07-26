#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array = malloc( 3 * sizeof(int));

    if(array == NULL){

        printf("No se puo asiganr chele");
    }

    array[0] = 1;
    array[1] = 50;
    array[2] = 52;

    printf("%p\n", array);
    for(int i = 0; i < 3; i++){

        printf("%i\n", array[i]);
    }


    free(array);
}
