#include <stdio.h>

int main()
{

    int vet[7];

    for (int i = 0; i < 7; i++)
    {
        int num;
        scanf("%d\n", &num);
        vet[i] = num;
    }

    printf("Multiplos de 2:");
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0)
            printf(" %d", vet[i]);
    }
    printf("\n");
    printf("Multiplos de 3:");
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0)
            printf(" %d", vet[i]);
    }
    printf("\n");
    printf("Multiplos de 2 e 3:");
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
            printf(" %d", vet[i]);
    }

    return 0;
}