//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int fac(){//Practica 51: Calcular la factorial de un número
    int acum=1,cont,n;
    printf("Dame un numero\n");
    scanf ("%d",&n);
    for(cont=n;cont>=1;cont--){
        acum=acum*(cont);
    }
    return (acum);
}

int main(){
    printf("\nSu factorial es %d\n",fac());
    return 0;

}
