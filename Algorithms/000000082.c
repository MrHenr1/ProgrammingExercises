#include <stdio.h>
#include <string.h>
#define TAM 10

int main()
{

    float Venda[TAM],
        Comissao[TAM],
        TotalDeVendas = 0,
        MaiorValor,
        MenorValor;
    char Nome[TAM][50],
        NomeMaiorValor[50],
        NomeMenorValor[50];

    for (int i = 0; i < TAM; i++)
    {
        scanf(" %s", Nome[i]);
        scanf("%f", &Venda[i]);
        scanf("%f", &Comissao[i]);
        TotalDeVendas += Venda[i];
    }

    MaiorValor = Venda[0] * (Comissao[0] / 100);
    MenorValor = Venda[0] * (Comissao[0] / 100);
    strcpy(NomeMaiorValor,Nome[0]);
    strcpy(NomeMenorValor,Nome[0]);

    printf("==========================\n");
    printf("RELATORIO GERAL DAS VENDAS\n");
    printf("%-15s %-10s\n", "NOME", "COMISSAO");
    for (int i = 0; i < TAM; i++)
    {
        printf("%-15s R$ %.2f\n", Nome[i], Venda[i] * (Comissao[i] / 100));
        if ((Venda[i] * (Comissao[i] / 100)) > MaiorValor)
        {
            MaiorValor = Venda[i] * (Comissao[i] / 100);
            strcpy(NomeMaiorValor,Nome[i]);
        }
        if (Venda[i] * (Comissao[i] / 100) < MenorValor)
        {
            MenorValor = Venda[i] * (Comissao[i] / 100);
            strcpy(NomeMenorValor,Nome[i]);
        }
    }
    printf("==========================\n");
    printf("Valor total de vendas de todos os vendedores: R$ %.2f\n", TotalDeVendas);
    printf("O maior valor: R$ %.2f e o nome de quem recebera: %s\n", MaiorValor, NomeMaiorValor);
    printf("O menor valor: R$ %.2f e o nome de quem recebera: %s\n", MenorValor, NomeMenorValor);

    return 0;
}