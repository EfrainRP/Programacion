//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//Practica 52: Muestra el siguiente
//menú y calcula la operación que el usuario desee.
//Menú: 1)Raíz cuadrada 2)Potencia de un número
//3)Coseno de un número 4)Logaritmo natural de un número
int n;
float r;
float ra(){
    printf("Dame un numero\n");
    scanf ("%d",&n);
    r=sqrt(n);
    return (r);
}
float po(){
    int y;
    printf("Dame un numero\n");
    scanf ("%d",&n);
    printf("Dame una potencia\n");
    scanf ("%d",&y);
    r=pow(n,y);
    return (r);
}
float co(){
    printf("Dame un numero\n");
    scanf ("%d",&n);
    r=cos(n);
    return (r);
}
float lg(){
    printf("Dame un numero\n");
    scanf ("%d",&n);
    r=log(n);
    return (r);
}

int main(){
    int opc;
    printf("Menu: 1)Raiz  2)Potencia  3)Coseno  4)Logaritmo natural\n");
    scanf ("%d",&opc);
    switch(opc){
    case 1:
         printf("\nSu factorial es %1.2f\n",ra());
         break;

    case 2:
        printf("\nSu potencia es %1.2f\n",po());
        break;

    case 3:
        printf("\nSu coseno es %1.2f",co());
        break;

    case 4:
        printf("\nSu logaritmo natural es %1.2f\n",lg());
        break;

    default:
        printf("\nNo existe tal operacion\n");
    }
    return 0;
}
