#include <stdio.h>
#include <string.h>
#define ALUNOS 7

int main()
{

    char Aluno[ALUNOS][50],
        AlunoMaiorMediaNome[50];
    float Media[ALUNOS],
        AlunoMaiorMedia,
        NotaPrecisa;

    for (int i = 0; i < ALUNOS; i++)
    {
        scanf("%49s", &Aluno[i]);
        scanf("%f", &Media[i]);
    }

    strcpy(AlunoMaiorMediaNome, Aluno[0]);
    AlunoMaiorMedia = Media[0];
    for (int i = 0; i < ALUNOS; i++)
    {
        if (Media[i] > AlunoMaiorMedia)
        {
            AlunoMaiorMedia = Media[i];
            strcpy(AlunoMaiorMediaNome, Aluno[i]);
        }
    }
    printf("Aluno com maior media: %s\n", AlunoMaiorMediaNome);
    printf("%-15s %-30s\n", "ALUNO", "NOTA PRECISA");
    for (int i = 0; i < ALUNOS; i++)
    {
        if (Media[i] < 7.0)
        {
            NotaPrecisa = (5.0 * 2) - Media[i];
            printf("%-15s %.2f\n", Aluno[i], NotaPrecisa);
        }
    }

    return 0;
}