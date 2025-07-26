#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array = malloc(10 * sizeof(int));

    if(array == NULL){
        printf("Mira loquito no se asigno");
        return 1;
    }

    printf("%p\n", array);

    for( int i = 0; i < 10; i++){

        printf("%i\n", array[i]);
    }


    free(array);


}
