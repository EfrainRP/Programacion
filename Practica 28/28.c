//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 28: Calcular el promedio
            //de "n" calificaciones
{
    int cant, num;
    float acum=0, calif;
    printf("Dame cuantas calificaciones:\n");
    scanf("%d", &cant);

    for(num=1;num<=cant;num++){
        printf("\nDame calificacion: \n");
        scanf("%f",&calif);
        acum=acum+calif;
    }

    printf("\n\tEl promedio es %1.2f\n", acum/cant);
    return 0;
}
