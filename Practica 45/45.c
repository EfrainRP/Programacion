//Efrain Robles Pulido
#include <stdio.h>
#include <ctype.h>//Se encarga de modificar y operar con caracteres
#define TAM 10

int main(){ //Practica 45
    char letra[TAM];
    int c;
    for(c=0;c<TAM;++c)
        letra[c]=getchar();//Introduccion de letra
                     //putchart - salida de letras

    for(c=0;c<TAM;++c)
        putchar(toupper(letra[c]));
}
