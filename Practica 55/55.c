//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//Practica 55: Muestra el siguiente
//men� y calcula la operaci�n que el usuario desee.
//Men�: 1)Ra�z cuadrada 2)Potencia de un n�mero
//3)Coseno de un n�mero 4)Logaritmo natural de un n�mero

float ra(float n){
    return (sqrt(n));
}
float po(float n, float p){
    return (pow(n,p));
}
float co(float n){
    return (cos(n));
}
float lg(float n){
    return (log(n));
}

int main(){
    int opc;
    float num, y;
    printf("Menu: 1)Raiz cuadrada  2)Potencia  3)Coseno  4)Logaritmo natural\n");
    scanf ("%d",&opc);
    printf("Dame un numero\n");
    scanf ("%f",&num);
    switch(opc){
    case 1:
         printf("\nSu raiz cuadrada es %1.2f\n",ra(num));
         break;

    case 2:
        printf("Dame la potencia\n");
        scanf ("%f",&y);
        printf("\nSu potencia es %1.2f\n",po(num,y));
        break;

    case 3:
        printf("\nSu coseno es %1.2f",co(num));
        break;

    case 4:
        printf("\nSu logaritmo natural es %1.2f\n",lg(num));
        break;

    default:
        printf("\nNo existe tal operacion\n");
    }
    return 0;
}
