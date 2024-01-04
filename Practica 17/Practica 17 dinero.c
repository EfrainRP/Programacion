//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main(int arg,char*argv[])//Practica 17: Menú de conversiones: pesos-dólar,
                                //pesos-euros, dólar-pesos y euros-pesos
{
    int opc;
    float din, conv;
    printf("Elige conversion: 1.Peso a dolar  2.Peso a euro  3. Dolar a peso 4. Euro a pesos \n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf("Dame cantidad de pesos: \n");
        scanf("%f", &din);
        conv=din*0.050;
        printf("Equivale a %1.2f dolares", conv);
        break;

    case 2:
        printf("Dame cantidad de pesos: \n");
        scanf("%f", &din);
        conv=din*0.042;
        printf("Equivale a %1.2f euros\n", conv);
        break;

    case 3:
        printf("Dame cantidad de dolares: \n");
        scanf("%f", &din);
        conv=din*19.93;
        printf("Equivale a %1.2f pesos\n", conv);
        break;

    case 4:
        printf("Dame cantidad de euros: \n");
        scanf("%f", &din);
        conv=din*23.55;
        printf("Equivale a %1.2f pesos\n", conv);
        break;

    default:
        printf("No existe tal operacion\n");
    }
    return 0;
}
