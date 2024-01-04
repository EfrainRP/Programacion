//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 7: Calcular el area de un trapecio
{
    int base_mayor, base_menor, h, area;
	printf ("¿Cuanto mide la base mayor en cm?\n");
    scanf("%d",&base_mayor);
    printf ("¿Cuanto mide la base menor en cm?\n");
    scanf("%d", &base_menor);
    printf ("¿Cuanto mide la altura en cm?\n");
    scanf("%d", &h);
	area=((base_mayor+ base_menor) * h)/2;
	printf("El area del trapecio es %u cm^2\n", area);
    system("PAUSE"); return 0;

}
