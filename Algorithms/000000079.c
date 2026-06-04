#include <stdio.h>

int main()
{

    int CodProduto[10],
        TotalEstoque[10],
        CodigoCliente,
        CodigoProduto,
        QuantidadeCliente,
        Verifica = 0,
        Pos;

    for (int i = 0; i < 10; i++)
    {
        int Info1, Info2;
        scanf("%d", &Info1);
        scanf("%d", &Info2);
        CodProduto[i] = Info1;
        TotalEstoque[i] = Info2;
    }

    do
    {
        printf("=======================\n");
        printf("Codigo Cliente:");
        scanf("%d", &CodigoCliente);
        if (CodigoCliente != 0)
        {
            printf("Codigo produto:");
            scanf("%d", &CodigoProduto);
            printf("Quantidade desejada:");
            scanf("%d", &QuantidadeCliente);
            for (int i = 0; i < 10; i++)
            {
                if (CodProduto[i] == CodigoProduto)
                {
                    Verifica = 1;
                    Pos = i;
                    break;
                }
            }
            if (Verifica == 1)
            {
                if ((TotalEstoque[Pos] - QuantidadeCliente) >= 0)
                {
                    TotalEstoque[Pos] = TotalEstoque[Pos] - QuantidadeCliente;
                    printf("Pedido Atendido. Obrigado e volte sempre.\n");
                }
                else
                {
                    printf("Nao temos estoque suficiente dessa mercadoria.\n");
                }
            }
            else
            {
                printf("Produto nao encontrado.\n");
            }
            Verifica = 0;
        }
    } while (CodigoCliente != 0);
    printf("==============================\n");
    printf("===== TABELA ATUALIZADA ====\n");
    printf("Produto \t Estoque \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t\t %d\n", CodProduto[i], TotalEstoque[i]);
    }

    return 0;
}