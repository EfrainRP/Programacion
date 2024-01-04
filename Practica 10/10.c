//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 10: Solicitar un número entero
//al usuario e imprimir en pantalla si es “positivo o negativo”
{
    int n1;
    printf("Dame un numero: \n");
    scanf("%d",&n1);

    if (n1>0){
        printf("Es numero positivo \n\n");
    }
    else {
        printf("Es numero negativo \n\n");
    }
    printf("Se acabo.");

}
