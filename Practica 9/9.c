//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 9: Selectiva doble
{
    int ed;
    printf("Dame tu edad: \n");
    scanf("%d",&ed);

    if (ed>=18){
        printf("Eres mayor de edad\n");
        printf("Ya puedes votar\n\n");
    }
    else{
        printf("Eres menor de edad\n");
        printf("No puedes votar\n\n");
    }
    printf("Que tengas buen dia \n");
    return 0;
}
