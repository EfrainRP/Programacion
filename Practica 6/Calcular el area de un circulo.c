//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416;

int main(int arg,char*argv[])//Practica 6: Calcular el area de un circulo
{
    float radio, area;
    printf("¿Cuanto mide el radio en cm?\n");
    scanf("%f",&radio);
    area=(radio*radio)*pi;
    printf("El area del circulo es %1.4f cm^2\n", area);
    system("PAUSE"); return 0;

}
