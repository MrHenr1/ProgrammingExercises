#include <stdio.h>

int main()
{

    int idade,
        qnt50AX = 0;

    float altura,
        media50AX,
        altura50AX = 0;

    do
    {
        scanf("%d", &idade);
        if (idade > 0)
        {
            scanf("%f", &altura);

            if (idade > 50)
            {
                qnt50AX++;
                altura50AX++;
            }
        }
    } while (idade > 0);

    media50AX = altura50AX / qnt50AX;

    printf("Media de altura das pessoas com mais de 50 anos: %.2f\n", media50AX);

    return 0;
}