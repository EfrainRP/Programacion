//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main()//Practica 41: Arreglos unidimensionales y bidimensionales
{
     int x[3][3]={7,15,3,4,9,11,6,2,5},y[3]={0,0,0},i,j,m=1;

    for(i=0;i<3;i++){
        m=1;
        for(j=0;j<3;j++){
            m=m*x[i][j];
            y[i]=m;
        }
    }
        for(i=0;i<3;i++){
            printf("%d \n",y[i]);
            y[i]=m+i;
        }
        for(i=0;i<3;i++)
            printf("%d) %d\n",i+1,y[i]);
    return 0;
}
