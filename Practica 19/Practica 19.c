//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int arg,char*argv[])//Practica 19: Calculadora científica:
                            //potencia, raíz cuadrada, seno, coseno, logaritmo natural
{
    int opc;
    float res, a, b;
    printf("Elige 1.Potencia  2.Raiz cuadrada  3.Seno   4.Coseno   5.Logaritmo natural \n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf ("Dame dos valores:\n");
        scanf("%f %f", &a,&b);
        res=pow(a,b);
        printf("El resultado de la potencia es %1.0f\n", res);
        break;

    case 2:
        printf ("Dame un valor:\n");
        scanf("%f", &a);
        res=sqrt(a);
        printf("El resultado de la raiz cuadrada es %1.2f\n", res);
        break;

    case 3:
        printf ("Dame un valor:\n");
        scanf("%f", &a);
        res=sin(a);
        printf("El resultado del seno es %1.2f\n", res);
        break;

    case 4:
        printf ("Dame un valor:\n");
        scanf("%f", &a);
        res=cos(a);
        printf("El resultado del coseno es %1.2f\n", res);
        break;

    case 5:
        printf ("Dame un valor:\n");
        scanf("%f", &a);
        res=log(a);
        printf("El resultado del logaritmo natural es %1.2f\n", res);
        break;

    default:
        printf("No existe tal operacion\n");
    }
    return 0;
}

