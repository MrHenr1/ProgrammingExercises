#include <stdio.h>

int main()
{

    int Opiniao,
        Idade,
        QntRegular = 0,
        QntOtimo = 0,
        QntBom = 0,
        QntIdadeOtimo = 0,
        QntTotal;

    float MediaOtimo,
        PorcentBom;

    for (int i = 0; i < 15; i++)
    {
        printf("Idade:");
        scanf("%d", &Idade);
        printf("1. Otimo\n");
        printf("2. Bom\n");
        printf("3. Regular\n");
        printf("Opiniao:");
        scanf("%d", &Opiniao);
        switch (Opiniao)
        {
        case 1:
            QntOtimo++;
            QntIdadeOtimo += Idade;
            break;
        case 2:
            QntBom++;
            break;
        case 3:
            QntRegular++;
            break;
        }
    }

    QntTotal = QntOtimo + QntBom + QntRegular;

    MediaOtimo = QntIdadeOtimo / QntOtimo;
    PorcentBom = ( (float)QntBom / (float)QntTotal) * 100;

    printf("A media das idades das pessoas que responderam otimo: %.2f\n", MediaOtimo);
    printf("A quantidade de pessoas que responderam regular: %d\n", QntRegular);
    printf("A percentagem de pessoas que responderam bom: %.1f%%\n", PorcentBom);

    return 0;
}