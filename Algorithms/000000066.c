#include <stdio.h>

int main()
{

    int MulherSIM = 0,
        HomemNAO = 0,
        Homens = 0,
        PessoaSim = 0,
        PessoaNao = 0;

    float PercentHomemNAO;

    char Sexo, Resposta;

    for (int i = 0; i < 10; i++)
    {
        printf("SEXO [H/F]: ");
        scanf(" %c", &Sexo);
        printf("RESPOSTA [S/N]: ");
        scanf(" %c", &Resposta);
        switch (Resposta)
        {
        case 'S':
            if (Sexo == 'F')
            {
                MulherSIM++;
            }
            if (Sexo == 'H')
            {
                Homens++;
            }
            PessoaSim++;
            break;
        case 'N':
            if (Sexo == 'H')
                HomemNAO++;
            PessoaNao++;
            break;
        }
    }
    if(HomemNAO != 0 && Homens != 0)
        PercentHomemNAO = ((float)HomemNAO / (float)Homens) * 100;

    printf("Numero de pessoas que responderam sim: %d\n", PessoaSim);
    printf("Numero de pessoas que responderam nao: %d\n", PessoaNao);
    printf("Numero de mulheres que responderam sim: %d\n", MulherSIM);
    printf("A percentagem de homens que responderam nao, dentre os demais: %.1f%%\n", PercentHomemNAO);

    return 0;
}