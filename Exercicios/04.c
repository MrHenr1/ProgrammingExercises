/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float a, b, media;
    scanf("%f",&a);
    scanf("%f",&b);
    media = (a * 2 + b * 3) / (2+3);
    printf("%.2f\n",media);

    return 0;
}