//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 32: Tablas del 1 al 10 con while
{
    int i=1,j;

    while(i<=10){
        printf("\nTabla de multiplicar del %d\n",i);
        j=1;
        while(j<=10){
            printf("%\t%d x %d = %d \n",i,j,i*j);
            j++;

        }
        i++;

    }
    return 0;
}
