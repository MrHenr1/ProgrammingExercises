#include <stdio.h>

int main()
{

    int impar = 0, par = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
            par += num;
        else
            impar += num;
    }

    printf("Soma dos pares: %d\n", par);
    printf("Soma dos ímpares: %d\n", impar);

    return 0;
}