//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int prom(int calif){//Practica 53: Calcular el promedio de 5 calificaciones
    int acum;
    acum=acum+calif;
    return (acum);
}

int main(){
    int s,cont,c;
    for(cont=1;cont<=5;cont++){
        printf("Dame una calificacion\n");
        scanf ("%d",&c);
        s=prom(c);
    }
    printf("\nPromedio de 5 calificaciones es %d\n", s/5);
    return 0;

}
