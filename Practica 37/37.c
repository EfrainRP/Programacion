//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 37: Encontrar el elemento "mayor" de un arreglo de 15 elementos
{
    int A[15], i, mayor=0;

    for(i=0;i<=14;i++){
        printf("\nDame un numero:\n");
        scanf("%d",&A[i]);
    }
    for(i=0;i<=14;i++){
        if(A[i]>mayor){
            mayor=A[i]; //se ira actualizando el valor mayor
        }               //confome vaya avanzando
    }
    printf("\n\tEl mayor es %d\n",mayor);
    return 0;
}
