//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 26: Desplegar en pantalla
                            // la tabla del 7
{
    int res, cont=1;
    do{
        res=7*cont;
        printf("7x%d = %d \n", cont, res);
        cont++;
    }
    while(cont<=10);
    return 0;
}
