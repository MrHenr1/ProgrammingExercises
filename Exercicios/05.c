/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float preco, novopreco;
    scanf("%f",&preco);
    novopreco = preco * 0.9;
    printf("%.2f\n",novopreco);

    return 0;
}