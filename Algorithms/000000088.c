#include <stdio.h>

int main()
{

    int vet[5], somador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d numero ", i + 1);
        scanf("%d", &vet[i]);
        somador += vet[i];
    }

    // i = 0 -> vet[i] = 1
    // i = 1 -> vet[i] = 2
    // i = 2 -> vet[i] = 3
    // i = 3 -> vet[i] = 4
    // i = 4 -> vet[i] = 5

    printf("Os numeros digitados foram: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vet[i]);
        if (i != 4)
            printf(" + ");
        else
            printf(" = %d", somador);
    }

    return 0;
}