//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 36: Guardar 10 elementos de tipo real en
//un vector e imprimir en pantalla el "promedio" de todos sus elementos
{
    float A[10], acum;
    int i;

    for(i=0;i<=9;i++){
        printf("\nDame calificacion #%d:\n",i+1);
        scanf("%f",&A[i]);
        acum=acum+A[i];
    }

    printf("\n\tPromedio final: %.2f\n",acum/10);

    return 0;
}
