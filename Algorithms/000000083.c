#include <stdio.h>
#define TAM 10

int main()
{

    float Num[TAM],
        SomaPositivos = 0.0,
        NumG;

    int QuantNegativos = 0;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &NumG);
        Num[i] = NumG;
    }

    for (int i = 0; i < TAM; i++)
    {
        if (Num[i] < 0.0)
            QuantNegativos++;
        if (Num[i] > 0.0)
            SomaPositivos += Num[i];
    }

    printf("Quantidade de numeros negativos: %d\n", QuantNegativos);
    printf("Soma dos numeros positivos: %.1f\n", SomaPositivos);

    return 0;
}