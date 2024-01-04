//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 29: Desplegar en pantalla la
//tabla de multiplicar que el usuario desee
{
    int mult, num;
    printf("Dame un numero para la tabla:\n");
    scanf("%d", &mult);

    for(num=1;num<=10;num++)
        printf("%d x %d = %d\n",mult, num, mult*num);

    return 0;
}
