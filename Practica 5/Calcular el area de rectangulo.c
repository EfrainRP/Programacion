//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 5: Calcular el area de un rectangulo
{
    int largo, ancho, area;
    printf ("¿Cuanto mide el largo en cm?\n");
    scanf("%d", &largo);
    printf ("¿Cuanto mide el ancho en cm?\n");
    scanf("%d", &ancho);
    area=largo*ancho;
    printf("El area del rectangulo es %u cm^2\n", area);
    system("PAUSE"); return 0;
}
