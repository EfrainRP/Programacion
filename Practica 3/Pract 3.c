//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[]){//Practica 3: Calcular el promedio de 3 calificaciones

    int n1,n2,n3,prom;
    printf("Dame 3 calificaiones: \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    prom=((n1+n2+n3)/3);
    printf("Promedio de las calificaciones es %u \n ",prom);
    system("PAUSE"); return 0;
}
