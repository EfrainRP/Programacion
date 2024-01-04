//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[]){//Practica 13: Mostrar en pantalla tres números
//solicitados en orden ascendente
    int n1,n2,n3;
    printf("Dame tres numeros enteros: \n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if ((n1<n2)&&(n2<n3)){
        printf("Orden ascendente: %d,%d y %d\n\n", n1,n2,n3);
    }
    else if((n1<n3)&&(n3<n2)){
        printf("Orden ascendente: %d,%d y %d\n\n", n1,n3,n2);
    }
    else if((n2<n1)&&(n1<n3)){
        printf("Orden ascendente: %d,%d y %d\n\n", n2,n1,n3);
    }
    else if((n2<n3)&&(n3<n1)){
        printf("Orden ascendente: %d,%d y %d\n\n", n2,n3,n1);
    }
    else if((n3<n2)&&(n2<n1)){
        printf("Orden ascendente: %d,%d y %d\n\n", n3,n2,n1);
    }
    else if((n3<n1)&&(n1<n2)){
        printf("Orden ascendente: %d,%d y %d\n\n", n3,n1,n2);
    }
    printf("Que tenga un buen dia\n");
}
