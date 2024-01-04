//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 35: Suma de dos arreglos inidimensionales
{
    float A[5]={3.2,4.6,1.7,8.3,5.2}, B[5]={4.9,7.1,9.5,2.7,6.8},C[5];
    int i;

    for(i=0;i<=4;i++)//Suma los arreglos que ya fueron inicializados
        C[i]=A[i]+B[i];

    for(i=0;i<=4;i++)//Muestra completamente cada una de las sumas
        printf("\t%.2f + %.2f = %.2f\n",A[i],B[i],C[i]);
    return 0;
}
