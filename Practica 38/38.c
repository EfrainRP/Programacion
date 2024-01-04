//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){
/*Practica 38: LLenar dos arreglos de tamaño 10 con elementos de tipo real
y dejar en un tercer arreglo la multiplicacion de los dos anteriores. Mostrar
en pantalla la operacion completa de cada una de las multiplicaciones*/
    float A[10], B[10], C[10];
    int i;

    for(i=0;i<=9;i++){
        printf("\nDame un numero para A:\n");
        scanf("%f",&A[i]);
    }
    for(i=0;i<=9;i++){
        printf("\nDame un numero para B:\n");
        scanf("%f",&B[i]);
    }
    for(i=0;i<=9;i++){
        C[i]=A[i]*B[i];
    }
    for (i=0;i<=9;i++)
        printf("\n\t%.2f x %.2f = %.2f\n",A[i],B[i],C[i]);
    return 0;
}
