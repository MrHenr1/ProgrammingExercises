/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float altura, area, basemaior, basemenor;
    scanf("%f",&altura);
    scanf("%f",&basemaior);
    scanf("%f",&basemenor);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("%.2f\n",area);

    return 0;
}