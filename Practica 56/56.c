//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

//Practica 56: Menú: suma y resta
//Prototipos
int suma (int a, int b);
int resta (int a, int b);

//Principal
int main(){
    int n1,n2,r,opc;
    printf("1)Suma  2)Resta\n");
    scanf ("%d",&opc);
    printf("Dame dos valores\n");
    scanf ("%d%d",&n1,&n2);
    if(opc==1){
         r=suma(n1,n2);
         printf("\nEl resultado de la suma es %d\n",r);
    }
    else if (opc==2){
        printf("\nEl resultado de la resta es %d\n",resta(n1,n2));
    }
    system("PAUSE");
    return 0;
}
//Funciones
int suma(int a, int b){
    int c;
    c=a+b;
    return (c);
}
int resta(int a, int b){
    return(a-b);
}
