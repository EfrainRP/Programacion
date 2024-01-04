//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 2: Suma de dos numeros
{
    int n1, n2, sum;
    printf("Dame dos enteros\n");
    scanf("%d %d",&n1,&n2);
    sum=n1 + n2;
    printf("El resultado es %i\n\n", sum);
    system("PAUSE"); return 0;
}
