#include <stdio.h>

int main()
{

    int CodCliente,
        Tipo;

    float ValorInvestido,
        RendimentoMensal,
        TotalInvestido,
        TotalDeJuros;

    do
    {
        printf("Codigo do cliente: ");
        scanf("%d", &CodCliente);
        if (CodCliente > 0)
        {
            printf("Tipo do investimento: ");
            scanf("%d", &Tipo);
            printf("Valor Investido: ");
            scanf("%f", &ValorInvestido);
            printf("============================================\n");
            printf("Tipo de Investimento escolhido: ");
            switch (Tipo)
            { // 1% = 1/100, 1.5 = 1.5/100
            case 1:
                printf("Poupança\n");
                RendimentoMensal = (float)1.5 / 100;
                TotalDeJuros = RendimentoMensal * ValorInvestido;
                break;
            case 2:
                printf("Poupança Plus\n");
                RendimentoMensal = (float)2 / 100;
                TotalDeJuros = RendimentoMensal * ValorInvestido;
                break;
            case 3:
                printf("Fundos de renda fixa\n");
                RendimentoMensal = (float)4 / 100;
                TotalDeJuros = RendimentoMensal * ValorInvestido;
                break;
            default:
                printf("Investimento Inválido.\n");
            }
            TotalInvestido = ValorInvestido + TotalDeJuros;
            printf("Código do cliente: %d\n", CodCliente);
            printf("Rendimento Mensal: %.1f%%\n", RendimentoMensal * 100);
            printf("Total Investido: %.2f\n", TotalInvestido);
            printf("Total de Juros Pagos: %.2f\n", TotalDeJuros);
            printf("============================================\n");
        }
    } while (CodCliente > 0);

    return 0;
}