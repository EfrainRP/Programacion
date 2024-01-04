//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 20: Suma y Resta con selectiva doble anidada
{
    int opc,a,b,res;
    printf("Dame dos valores: \n");
    scanf("%d %d", &a,&b);
    printf("Elige 1.Suma  2.Resta \n");
    scanf("%d",&opc);

    if(opc==1){
        res=a+b;
        printf("El resultado de la suma es %d\n", res);
    }
    else if (opc==2){
        res=a-b;
        printf("El resultado de la resta es %d\n", res);

    }
    else{
        printf("No existe tal operacion\n", res);
    }
    return 0;
}
