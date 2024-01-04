//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 8: Selectiva simple
{
    int ed;
    printf("Dame tu edad: \n");
    scanf("%d",&ed);

    if (ed<18){
        printf("Eres menor de edad \n");
        printf("No puedes votar \n\n");
    }
    printf("Que tengas buen dia \n");
    return 0;
}
