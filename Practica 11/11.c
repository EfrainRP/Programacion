//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 11: Solicitar un
//número al usuario e imprimir en pantalla si es “par o impar”
{
    int n1;
    printf("Dame un numero: \n");
    scanf("%d",&n1);

    if ((n1%2)==0){
        printf("Es numero par \n");
    }
    else {
        printf("Es numero impar \n");
    }
    printf("Se acabo.\n");

}
