//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 21: Serie del 1 al limite
{
    int num=1, lim;
    printf("¿Hasta que numero deseas visualizar tu serie? \n");
    scanf("%d",&lim);

    while(num<=lim){
        printf("\n\t%d", num);
        num++;
    }
    return 0;
}
