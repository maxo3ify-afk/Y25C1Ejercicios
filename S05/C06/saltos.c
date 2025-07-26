#include <cs50.h>
#include <stdio.h>


int main(void){

    for(int i = 0; i<10; i++){
        if (i == 5)
            continue;
        printf("%i ", i);
    }
    printf("%i\n", i);
}


