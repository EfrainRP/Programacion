//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 40: Suma de dos arreglos
{
    int A1[3][3], B1[3][3], C1[3][3],i,j;//matriz fila x columna

    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++){//Llena el arreglo
            printf("Dame el elemento %d,%d del arreglo A1\n",i,j);
            scanf("%d",&A1[i][j]);

            printf("Dame el elemento %d,%d del arreglo B1\n",i,j);
            scanf("%d",&B1[i][j]);
        }

    for(i=0;i<=2;i++)//Suma y muestra arreglos
        for(j=0;j<=2;j++){
            C1[i][j]=A1[i][j]+B1[i][j];
            printf("%2d + %2d = %3d\n",A1[i][j], B1[i][j], C1[i][j]);
        }

    return 0;
}
