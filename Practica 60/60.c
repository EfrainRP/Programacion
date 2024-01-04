//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#define TAM 100
//Practica 60: Ordenar un arreglo unidimensional de menor a mayor

int ordenar(int n, int x[]);

int main(){
    int i, n,x[TAM];
    printf("¿Cuantos numeros seran introducidos?\n");
    scanf("%d",&n);
    for (i=0;i<n;++i){
        printf("i=%d x=",i+1);
        scanf("%d",&x[i]);
    }
    ordenar(n,x); //Llamada la funcion ordenar

    printf("Lista de numeros ordenada \n");
    for (i=0;i<n;++i)
        printf("i=%d  x=%d\n",i+1,x[i]);
    return 0;
}

int ordenar(int n, int x[]){
    int i, elem, temp;
    for (elem=0;elem < n-1;++elem)
        for (i=elem+1;i<n;++i)
            if(x[i] < x[elem]){
                temp=x[elem];
                x[elem]=x[i];
                x[i]=temp;
            }
    return (0);
}

