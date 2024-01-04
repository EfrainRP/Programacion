//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 33: Tablas del 1 al 10 con do while
{
    int i=1,j;

    do{
        printf("\nTabla de multiplicar del %d\n",i);
        j=1;
        do{
            printf("%\t%d x %d = %d \n",i,j,i*j);
            j++;
        }
        while (j<=10);
        i++;
    }
    while(i<=10);
    return 0;
}
