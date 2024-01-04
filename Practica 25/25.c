//VERSION ACTUALIZADA
//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 25: Solicitar un
                            //numero y calcular su factorial
{
    int num,res=1,fac;
    printf("Dame un numero:\n");
    scanf("%d", &num);
    fac=num;
    do{
        res=res*fac;
        fac--;
    }
    while(fac>0);
    printf("\n\t%d! = %d \n",num,res);
    return 0;
}
