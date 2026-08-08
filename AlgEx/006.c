#include <stdio.h>

int main(){

    float salario,valorvendas,comissao,salariofinal;

    scanf("%f",&salario);
    scanf("%f",&valorvendas);
    comissao = valorvendas * 0.04;
    salariofinal = salario + comissao;

    return 0;
}