#include <cs50.h>
#include <stdio.h>

int main(){

    string nombre;
    int edad;
    nombre = get_string("Decime tu nombre:");
    edad = get_int("Deime tu edad:");
    printf("\"Hola: %s\" ,Tu edad es: %i\n", nombre, edad);
    printf("XD");
}
