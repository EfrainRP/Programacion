//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#define lim 10

int main(int arg,char*argv[])//Practica 24: Serie del 1 al 10 "do-while"
{
    int num=1;
    do{
        printf("%d\n",num);
        num++;
    }
    while(num<=lim);
    return 0;
}
