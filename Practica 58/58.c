//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

//Practica 58: Calcular la factorial de un número
int fac(int num);

int main(){
    int n;
    printf("Dame un numero\n");
    scanf ("%d",&n);
    printf("\nSu factorial es %d\n",fac(n));
    return 0;

}

int fac(int num){
    int acum=1,cont;
    for(cont=num;cont>=1;cont--)
        acum=acum*(cont);
    return (acum);
}
