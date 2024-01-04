//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int fac(int num){//Practica 54: Calcular la factorial de un número
    int acum=1,cont;
    for(cont=num;cont>=1;cont--)
        acum=acum*(cont);
    return (acum);
}

int main(){
    int n;
    printf("Dame un numero\n");
    scanf ("%d",&n);
    printf("\nSu factorial es %d\n",fac(n));
    return 0;

}
