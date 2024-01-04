//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){ //Practica 44: Realizar la multiplicación de dos matrices
//de 3x3 con elementos que el usuario desee
     float A1[3][3], B1[3][3],P[3][3];
     int i,j,a,sum;

    for(i=0;i<3;i++)//Llenado de arreglo por filas
        for(j=0;j<3;j++){
            printf("Dame el elemento %d,%d del arreglo A1\n",i,j);
            scanf("%f",&A1[i][j]);

            printf("Dame el elemento %d,%d del arreglo B1\n",i,j);
            scanf("%f",&B1[i][j]);
        }
    printf("\n");

    for(a=0;a<3;a++)//Producto de matrices
        for(i=0;i<3;i++){
            sum=0;
            for(j=0;j<3;j++)
                sum=sum+(A1[a][j]*B1[j][i]);

            P[a][i]=sum;
        }
    printf("\tMatriz P\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%3.2f  ",P[i][j]);
        printf("\n");
    }

    return 0;
}
