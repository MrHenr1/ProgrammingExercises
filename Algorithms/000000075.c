#include <stdio.h>

int main()
{

    int Maior,
        Menor,
        Valor,
        Quant = 0,
        Soma = 0;

    float Media;

    scanf("%d", &Valor);

    if (Valor > 0)
    {
        Soma += Valor;
        Quant++;
        Maior = Valor;
        Menor = Valor;
    }
    else if (Valor < 0)
        printf("Voce digitou um número negativo. Invalido!\n");

    do
    {
        scanf("%d", &Valor);

        if (!(Valor <= 0))
        {
            Soma += Valor;
            Quant++;
            if (Valor > Maior)
                Maior = Valor;
            else if (Valor < Menor)
                Menor = Valor;
        }
        else
            printf("Você digitou um número inválido.\n");
    } while (Valor != 0);

    Media = Soma / Quant;
    printf("Soma dos %d Numeros digitados: %d\n", Quant, Soma);
    printf("A media dos %d Numeros Digitados: %.2f\n", Quant, Media);
    printf("O menor numero digitado: %d e o maior numero digitado: %d\n", Menor, Maior);
    return 0;
}