/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float kilograma, grama;
    scanf("%f",&kilograma);
    grama = kilograma * 1000;
    printf("%.3f",grama);

    return 0;
}