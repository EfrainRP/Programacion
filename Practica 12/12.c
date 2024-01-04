//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 12: Solicitar tres números
//enteros al usuario e imprimir en pantalla el mayor de todos
{
    int n1,n2,n3;
    printf("Dame tres numeros enteros: \n\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if ((n1>n2)&&(n1>n3)){
        printf("%u es mayor\n\n", n1);
    }
    else if((n2>n1)&&(n2>n3)){
        printf("%u es mayor\n\n",n2);
    }
    else{
        printf("%u es mayor\n\n",n3);
    }
    printf("Que tenga un buen dia\n");
}
