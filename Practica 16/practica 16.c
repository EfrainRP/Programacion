//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416;
int main(int arg,char*argv[])//Practica 16: Menú de áreas: cuadrado, rectángulo,
                                //circulo, trapecio
{
    int opc;
    float area, base, altura, radio, BASE, lado;
    printf("Menu de areas:\n1.Cuadrado  2.Rectangulo   3.Circulo    4.Trapecio\n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf ("Dame cantidad de lado:\n");
        scanf("%f", &lado);
        area=lado * lado;
        printf("El area del cuadrado es %1.2f\n", area);
        break;

    case 2:
        printf ("Dame cantidad de base:\n");
        scanf("%f", &base);
        printf ("Dame cantidad de altura:\n");
        scanf("%f", &altura);
        area=base * altura;
        printf("El area del rectangulo es %1.2f\n", area);
        break;

    case 3:
        printf ("Dame cantidad de radio:\n");
        scanf("%f", &radio);
        area=pi(radio*radio);
        printf("El area del circulo es %1.2f\n", area);
        break;

    case 4:
        printf ("Dame cantidad de base menor:\n");
        scanf("%f", &base);
        printf ("Dame cantidad de base mayor:\n");
        scanf("%f", &BASE);
        printf ("Dame cantidad de altura:\n");
        scanf("%f", &altura);
        area=((BASE+base)*altura)/2;
        printf("El area del trapecio es %1.2f\n", area);
        break;

    default:
        printf("No existe tal operacion\n");
    }
    return 0;
}
