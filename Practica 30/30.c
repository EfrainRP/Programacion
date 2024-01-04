//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 30: Solicitar n numeros e imprimir en pantall la sumatoria final de los
//numeors que sean PARES y el producto de los numeros que sean IMPARES
{
    int cant, num, acum=0, acum2=1, n;
    printf("Dame una cantidad de numeros:\n");
    scanf("%d", &cant);

    for(num=1;num<=cant;num++){
        printf("\nDame un numero: \n");
        scanf("%d",&n);

        if((n%2)==0){
            acum=acum+n;
        }
        else{
            acum2=acum2*n;
        }
    }

    printf("\nSumatoria de numeros pares: %d\nProducto de numeros impares: %d\n", acum, acum2);
    return 0;
}
