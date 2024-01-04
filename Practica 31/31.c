//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 31: Despliega en pantalla todas las tablas de multiplicar
{
    int i,j;

    for(i=1;i<=10;i++){
        printf("\nTabla de multiplicar del %d\n",i);

        for(j=1;j<=10;j++)
            printf("%\t%d x %d = %d \n",i,j,i*j);
    }
    return 0;
}
