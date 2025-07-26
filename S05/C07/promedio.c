#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = 0;
    string nombre;
    nombre = get_string("Cual es tu nombre? ");
    do
    {
        n = get_int("%s digita la cantidad de notas a promediar: ",nombre);
    } while(n < 1);
    float notas[n];
    string NombresNotas[n];
    float promedio = 0;
    for(int i = 0;i < n ;i++)
    {
        NombresNotas[i] = get_string("Cual es el nombre de la clase? ");
        notas[i] = get_float("Digite la nota de la clase %s ", NombresNotas[i]);
        promedio += notas[i];
    }
    promedio = promedio / n;
    if(promedio < 60){
        printf("Mi estimado %s ponete a estudiar sacaste: %.2f de promedio \n",nombre, promedio);
    }
    else
    {
        printf("Mi estimado %s sos un monstruo sacaste: %.2f de promedio \n",nombre, promedio);
    }


    return 0;
}

