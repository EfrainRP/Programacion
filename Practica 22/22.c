//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 22: Imprimir en
//pantalla la serie de numeros impares del 105 al 1
{
    int num=105, lim=1;
    while(num>=lim){
        printf("\n\t%d", num);
        num=num-2;
    }
    return 0;
}
