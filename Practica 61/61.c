//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

//Practica 61: Llenar un arreglo con precios de 10 productos y transferir a una
//funcion para calcular el 30% de descuento de cada producto e imprimir en pantalla
//el precio final con descuento de cada producto

float desc(float x[]);
int i;
int main(){
    int n;
    float x[10];
    printf("\tPrecios de 10 productos\n");
    for (i=0;i<10;++i){
        printf("¿Cual es el precio? ");
        scanf("%f",&x[i]);
    }
    desc(x);
    printf("\n\t Precio final \n");
    for (i=0;i<10;++i)
        printf("i=%d  x=%1.2f\n",i+1,x[i]);
    return 0;
}

float desc(float x[]){
    for (i=0;i<10;++i)
        x[i]=x[i]*0.70;
    return (0);
}

