#include <stdio.h>

int main()
{

    int A = 0,
        B = 0,
        C = 0,
        D = 0;
    char x;

    for (int i = 0; i < 5; i++)
    {
        printf("ESCOLHA ENTRE OS GRUPOS: A/B/C/D ");
        scanf("%c*c", &x);
        getchar();
        switch (x)
        {
        case 'A':
            A++;
            break;
        case 'B':
            B++;
            break;
        case 'C':
            C++;
            break;
        case 'D':
            D++;
            break;
        default:
            printf("Escolha inválida.\n");
            break;
        }
    }

    if (A >= B && A >= C && A >= D)
    {
        printf("A = %d\n", A);
        if (B >= C && B >= D)
        {
            printf("B = %d\n", B);
            if (C >= D)
            {
                printf("C = %d\n", C);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("C = %d\n", C);
            }
        }
        else if (C >= B && C >= D)
        {
            printf("C = %d\n", C);
            if (B >= D)
            {
                printf("B = %d\n", B);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("B = %d\n", B);
            }
        }
        else if (D >= B && D >= C)
        {
            printf("D = %d\n", D);
            if (B >= C)
            {
                printf("B = %d\n", B);
                printf("C = %d\n", C);
            }
            else
            {
                printf("C = %d\n", C);
                printf("D = %d\n", D);
            }
        }
    }
    else if (B >= A && B >= C && B >= D)
    {
        printf("B = %d\n", B);
        if (A >= C && A >= D)
        {
            printf("A = %d\n", A);
            if (C >= D)
            {
                printf("C = %d\n", C);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("C = %d\n", C);
            }
        }
        else if (C >= A && C >= D)
        {
            printf("C = %d", C);
            if (A >= D)
            {
                printf("A = %d\n", A);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("%d \n", A);
            }
        }
        else if (D >= A && D >= C)
        {
            printf("D = %d\n", D);
            if (A >= C)
            {
                printf("A = %d\n", A);
                printf("C = %d\n", C);
            }
            else
            {
                printf("C = %d\n", C);
                printf("A = %d\n", A);
            }
        }
    }

    else if (C >= A && C >= B && C >= D)
    {
        printf("C = %d\n", C);
        if (A >= B && A >= D)
        {
            printf("A = %d\n", A);
            if (B >= D)
            {
                printf("B = %d\n", B);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("B = %d\n", B);
            }
        }
        else if (B >= A && B >= D)
        {
            printf("B = %d\n", B);
            if (B >= D)
            {
                printf("B = %d\n", B);
                printf("D = %d\n", D);
            }
            else
            {
                printf("D = %d\n", D);
                printf("B = %d\n", B);
            }
        }
        else if (D >= A && D >= B)
        {
            printf("D = %d\n", D);
            if (B >= A)
            {
                printf("B = %d\n", B);
                printf("A = %d\n", A);
            }

            else
            {
                printf("A = %d\n", A);
                printf("B = %d\n", B);
            }
        }
    }

    else if (D >= A && D >= C && D >= B)
    {
        printf("D = %d\n", D);
        if (A >= B && A >= C)
        {
            printf("A = %d\n", A);
            if (C >= B)
            {
                printf("C = %d\n", C);
                printf("B = %d\n", B);
            }
            else
            {
                printf("B = %d\n", B);
                printf("C = %d\n", C);
            }
        }
        else if (B >= A && B >= C)
        {
            printf("B = %d", B);
            if (A >= C)
            {
                printf("A = %d\n", A);
                printf("C = %d\n", C);
            }
            else
            {
                printf("C = %d\n", C);
                printf("A = %d\n", A);
            }
        }
        else if (D >= A && D >= B)
        {
            printf("D = %d\n", D);
            if (A >= B)
            {
                printf("A = %d\n", A);
                printf("B = %d\n", B);
            }
            else
            {
                printf("B = %d\n", B);
                printf("A = %d\n", A);
            }
        }
    }

    return 0;
}