#include <stdio.h>

int main()
{

    float lucromaximo,
        precodoingresso = 5.00,
        ingressosquant = 120,
        despesas = 200.00,
        valoracumulado = 0;

    do
    {
        printf("Preco ingresso: R$ %.2f\n", precodoingresso);
        printf("Quantidade Ingressos vendidos: %.2f\n", ingressosquant);
        valoracumulado = ingressosquant * precodoingresso;
        printf("Valor acumulado com ingressos: R$ %.2f\n",valoracumulado);
        printf("Despesas: R$ %.2f\n", despesas);
        lucromaximo = (ingressosquant * precodoingresso) - despesas;
        printf("Lucro maximo: R$ %.2f\n", lucromaximo);
        precodoingresso = precodoingresso - 0.50;
        ingressosquant += 26;
        printf("====================================================\n");
    } while (precodoingresso >= 1.00);

    return 0;
}