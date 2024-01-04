//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 42: Llenar un arreglo
//bidimensional con elementos de tipo real de 3x3
//y mostrar en pantalla la suma total de cada una de sus columnas
{
     float x[3][3],res;
     int i,j;

    for(i=0;i<3;i++)//Llenado de arreglo por filas
        for(j=0;j<3;j++){
            printf("Dame el elemento %d,%d del arreglo bidimensional\n",i,j);
            scanf("%f",&x[i][j]);
        }

    for(j=0;j<3;j++){//Suma de las columnas
        res=0;
        for(i=0;i<3;i++)
            res=res+x[i][j];

        printf("\nColumna %d: %.2f\n",j,res);
    }

    return 0;
}

