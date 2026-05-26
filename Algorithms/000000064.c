#include <stdio.h>

int main()
{

    int idade,
        faixa1a10 = 0,
        faixa11a20 = 0,
        faixa21a30 = 0,
        faixa31ax = 0;
    float peso,
        total1a10 = 0,
        total11a20 = 0,
        total21a30 = 0,
        total31ax = 0,
        media1a10 = 0,
        media11a20 = 0,
        media21a30 = 0,
        media31ax = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &idade);
        scanf("%f", &peso);
        if (idade >= 1 && idade <= 10)
        {
            total1a10 += peso;
            faixa1a10++;
        }
        if (idade >= 11 && idade <= 20)
        {
            total11a20 += peso;
            faixa11a20++;
        }
        if (idade >= 21 && idade <= 30)
        {
            total21a30 += peso;
        }
        if (idade >= 31)
        {
            total31ax += peso;
            faixa31ax++;
        }
    }

    if (faixa1a10 != 0)
        media1a10 = total1a10 / faixa1a10;

    if (faixa11a20 != 0)
        media11a20 = total11a20 / faixa11a20;

    if (faixa21a30 != 0)
        media21a30 = total21a30 / faixa21a30;

    if (faixa31ax != 0)
        media31ax = total31ax / faixa31ax;

    printf("Media da faixa etária dos 1 aos 10 anos: %.2f\n", media1a10);
    printf("Media da faixa etária dos 11 aos 20 anos: %.2f\n", media11a20);
    printf("Media da faixa etária dos 21 aos 30 anos: %.2f\n", media21a30);
    printf("Media da faixa etária dos 31 anos em diante: %.2f\n", media31ax);

    return 0;
}