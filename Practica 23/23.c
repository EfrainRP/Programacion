//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 23: Solicitar la base
//y la potencia para calcular su resultado con multiplicaciones
//sucesivas (Calcular la potencia de un número)
{
    int num=1, base, pot,res=1;
    printf("Dame una cantidad de base y a que potencia: \n");
    scanf("%d %d",&base, &pot);

    while(num<=pot){
        res=res*base;
        num++;
    }
    printf("\n\tEl resultado de %d^%d = %d \n", base, pot, res);
    return 0;
}
