#include <stdio.h>

int main()
{

    int op;
    float n1, n2, n3, p1, p2, p3, media;

    do
    {

        printf("1. Média Aritmetica\n");
        printf("2. Média Ponderada\n");
        printf("3. Sair\n");
        printf("> ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            scanf("%f", &n1);
            scanf("%f", &n2);
            media = (n1 + n2) / 2;
            printf("Media aritmetica: %.2f\n", media);
            break;
        case 2:
            scanf("%f", &n1);
            scanf("%f", &p1);
            scanf("%f", &n2);
            scanf("%f", &p2);
            scanf("%f", &n3);
            scanf("%f", &p3);
            media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
            printf("Media ponderada: %.2f\n", media);
            break;
        }

    } while (op != 3);

    return 0;
}