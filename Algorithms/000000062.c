#include <stdio.h>

int main()
{

    float valorcarro,
        precofinal = 0, percentualaumento = 0;

    scanf("%f", &valorcarro);

    precofinal = valorcarro - (valorcarro * 0.20);
    printf("Preco final para comprar a vista com 20%% de desconto: %.2f\n", precofinal);

    for (int i = 6; i <= 60; i += 6)
    {
        percentualaumento += 0.03;
        precofinal = valorcarro + (valorcarro * percentualaumento);
        printf("Valor final: %.2f com %d Parcelas\n", precofinal, i);
    }

    return 0;
}