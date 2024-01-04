//Efrain Robles Pulido
#include <stdio.h>
#include <string.h>//Se encarga de modificar y operar con caracteres

int main(){ //Practica 46
    char cadena[26];
    int total;
    printf("Introduce una oracion (max. 25 caracteres):");
    gets(cadena);//gets- scanf de cadenas

    total=strlen(cadena);//strlen- mide la logitud de la cadena
    printf("La longitud de la cadena es: %d\n",total);
    getch();//Teclazo final
}
