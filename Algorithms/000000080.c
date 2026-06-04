#include <stdio.h>

int main()
{

    int Elementos[15];

    for (int i = 0; i < 15; i++)
    {
        int num;
        scanf("%d", &num);
        Elementos[i] = num;
    }

    for (int i = 0; i < 15; i++)
    {
        if (Elementos[i] == 30)
        {
            printf("%d ", i);
        }
    }

    return 0;
}