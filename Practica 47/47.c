//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int color(){ //Practica 47: Colores
    printf("Rojo\n");
    return (0);
}
int color1(){
    printf("Morado\n");
    color();
    printf("Verde\n");
    return (0);
}
int color2(){
    color1();
    printf("Azul\n");
    return (0);
}
int main(){
    color();
    color2();
    color1();
    system("PAUSE");
    return 0;
}
