#include <stdio.h>

int main()
{

    int num, quociente = 0, resto, bin = 0;

    scanf("%d", &num);

    while (num >= 1)
    {
        resto = (num % 2) * 10;
        bin += resto;
        num = num / 2;
        bin *= 10;
    }
    resto = num % 2;
    bin += resto;

    printf("%d", bin);

    return 0;
}