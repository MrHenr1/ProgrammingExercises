#include <stdio.h>

int main()
{

    float vtVISTA = 0, vtPRAZO = 0, vtCOMPRAS, pPRAZO;
    char tipotransicao;

    for (int i = 0; i < 15; i++)
    {
        float x;
        scanf("%c*c", &tipotransicao);
        switch (tipotransicao)
        {
        case 'V':
            printf("Digite o valor pago a VISTA:");
            scanf("%f*c", &x);
            vtVISTA += x;
            break;
        case 'P':
            printf("Digite o valor pago a PRAZO:");
            scanf("%f*c", &x);
            vtPRAZO += x;
            break;
        default:
            printf("Opção inválida.\n");
        }
        getchar();
    }

    vtCOMPRAS = vtVISTA + vtPRAZO;
    pPRAZO = vtPRAZO / 3;
    
    printf("=========================================================\n");
    printf("Valor total das compras a vista: R$ %.2f\n", vtVISTA);
    printf("Valor total das compras a prazo: R$ %.2f\n", vtPRAZO);
    printf("Valor total das compras totais: R$ %.2f\n", vtCOMPRAS);
    printf("Valor da primeira prestação das compras a prazo: R$ %.2f\n", pPRAZO);
    printf("=========================================================\n");

    return 0;
}