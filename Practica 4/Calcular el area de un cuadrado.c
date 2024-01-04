//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica 4: Calcular el area de un cuadrado
{
    int lado, area;
    printf("¿Cuanto mide el lado en cm?\n");
    scanf("%d", &lado);
    area=lado*lado;
    printf("El area del cuadrado es %u cm^2\n", area);
    system("PAUSE"); return 0;
}
