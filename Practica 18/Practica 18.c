//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 18: Menú de conversiones:
                                //mts-cm, km-mts, cm-mts, mts-km
{
    int opc;
    float cant, conv;
    printf("Elige conversion: 1.mts-cm   2.km-mts   3. cm-mts  4. mts-km \n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf("Dame una cantidad de mts: \n");
        scanf("%f", &cant);
        conv=cant*100;
        printf("Equivale a %1.1f cm", conv);
        break;

    case 2:
        printf("Dame una cantidad de km: \n");
        scanf("%f", &cant);
        conv=cant*1000;
        printf("Equivale a %1.1f mts\n", conv);
        break;

    case 3:
        printf("Dame una cantidad de cm: \n");
        scanf("%f", &cant);
        conv=cant*0.01;
        printf("Equivale a %1.2f mts\n", conv);
        break;

    case 4:
        printf("Dame una cantidad de mts: \n");
        scanf("%f", &cant);
        conv=cant*0.001;
        printf("Equivale a %1.4f km\n", conv);
        break;

    default:
        printf("No existe tal operacion\n");
    }
    return 0;
}
