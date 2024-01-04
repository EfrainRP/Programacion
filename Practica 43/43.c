//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Practica 43: Llenar una matriz de 4x4 con elementos
//de tipo real y desplegar posteriormente los elementos de su “diagonal principal”,
//así como el producto final de los mismos
     float x[4][4],acum=1.00;
     int i,j;

    for(i=0;i<4;i++)//Llenado de arreglo por filas
        for(j=0;j<4;j++){
            printf("Dame el elemento %d,%d del arreglo bidimensional\n",i,j);
            scanf("%f",&x[i][j]);
        }
    printf("\n");
    /*for(i=0;i<4;i++){             //otra forma se hacerlo
        printf("%.2f ",x[i][i]);
        acum=acum*x[i][i];

    }
    printf("\n");*/

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                printf("%.2f ",x[i][j]);
                acum=acum*x[i][j];
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Su producto es: %.2f\n",acum);
    return 0;
}
