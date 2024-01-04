//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 34: Arreglos unidimensionales
{
    int datos[10],i;

    for(i=0;i<=9;i++){//Llena el arreglo con elementos
        printf("\nDame el elemento %d\n",i);
        scanf("%d",&datos[i]);

    }
        for(i=9;i>=0;i--)//Muestra los elementos del arreglo en sentido inverso
            printf("%\tEl elemento %d es %d\n",i,datos[i]);
    return 0;
}
