/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float salariofixo, vendas, comissao, salariofinal;
    scanf("%f",&salariofixo);
    scanf("%f",&vendas);
    comissao = 0.04 * vendas;
    salariofinal = salariofixo + comissao;
    printf("%.2f\n",comissao);
    printf("%.2f\n",salariofinal);

    return 0;
}