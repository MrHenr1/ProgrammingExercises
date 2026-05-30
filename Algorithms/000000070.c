#include <stdio.h>

int main()
{

    int LucroSUP = 0,
        LucroINF = 0;

    float PrecoCompra,
        PrecoVenda,
        Lucro,
        LucroTOTAL = 0;

    char TipoAcao;

    do
    {
        scanf(" %c", &TipoAcao);
        if (TipoAcao != 'F')
        {
            scanf("%f", &PrecoCompra);
            scanf("%f", &PrecoVenda);

            Lucro = PrecoVenda - PrecoCompra;

            if (Lucro > 1000)
            {
                LucroSUP++;
            }
            else if (Lucro < 200)
                LucroINF++;

            LucroTOTAL = Lucro + LucroTOTAL;
            printf("Lucro Ação: %.2f\n", Lucro);
        }
    } while (TipoAcao != 'F');
    printf("Quantidade de acoes com lucro superior a R$ 1.000,00: %d\n", LucroSUP);
    printf("Quantidade de acoes com lucro inferior a R$ 200,00: %d\n", LucroINF);
    printf("Lucro Total da empresa: %.2f\n", LucroTOTAL);

    return 0;
}