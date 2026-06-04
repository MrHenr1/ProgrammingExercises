#include <stdio.h>

int main()
{

    int vet[6],
        num,
        QntIMPAR = 0,
        QntPAR = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num);
        vet[i] = num;
    }

    printf("Números Pares: ");
    for (int i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf(" %d", vet[i]);
            QntPAR++;
        }
    }
    printf("\n Quantidade de números pares: %d \n", QntPAR);
    printf("Números Ímpares: ");
    for (int i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0)
        {
            printf(" %d", vet[i]);
            QntIMPAR++;
        }
    }
    printf("\n Quantidade de números impares: %d \n", QntIMPAR);

    return 0;
}