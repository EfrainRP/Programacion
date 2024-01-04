//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 39: Arreglos bidimensionales
{
     int matriz[4][4],i,j;//matriz fila x columna

    for(j=0;j<=3;j++)//Llena el arreglo por columnas
        for(i=0;i<=3;i++){
            printf("Dame el elemento %d,%d del arreglo bidimensinal\n",i,j);
            scanf("%d",&matriz[i][j]);
        }

    for(i=0;i<=3;i++)//Muestra el arreglo por filas
        for(j=0;j<=3;j++)
            printf("El elemento %d, %d es %d\n",i,j, matriz[i][j]);

    return 0;
}
