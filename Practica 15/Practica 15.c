//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 15: Calculadora de operaciones básicas
{
    int opc;
    float a, b, res;
    printf("Dame dos valores \n");
    scanf("%f %f",&a,&b);
    printf("Elige 1.Suma  2.Resta   3.Multiplicacion    4.Division\n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        res=a+b;
        printf("El resultado de la suma es %1.2f\n", res);
        break;

    case 2:
        res=a-b;
        printf("El resultado de la resta es %1.2f\n", res);
        break;

    case 3:
        res=a*b;
        printf("El resultado de la multiplicacion es %1.2f\n", res);
        break;

    case 4:
        res=a/b;
        printf("El resultado de la division es %1.2f\n", res);
        break;

    default:
        printf("No existe tal operacion\n");
    }
    return 0;
}
