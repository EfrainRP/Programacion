//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int prom(){//Practica 50: Calcular el promedio de 5 calificaciones
    int acum,cont,c;
    for(cont=1;cont<=5;cont++){
        printf("Dame una calificacion\n");
        scanf ("%d",&c);
        acum=acum+c;
    }
    return (acum/5);
}

int main(){
    printf("\nPromedio de 5 calificaciones es %d\n", prom());
    return 0;

}
