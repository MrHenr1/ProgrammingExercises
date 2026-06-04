#include <stdio.h>
#include <string.h>

#define Alunos 6 // Define um Numero qualquer de alunos

int main()
{

    int QuantAprovado = 0, QuantExame = 0, QuantReprovado = 0;

    float Nota1[Alunos], Nota2[Alunos], Media[Alunos], MediaClasse, NotaGeral = 0;
    char Aluno[Alunos][50], Situacao[Alunos][50];

    for (int i = 0; i < Alunos; i++)
    {
        scanf("%s", &Aluno[i]);
        scanf("%f", &Nota1[i]);
        scanf("%f", &Nota2[i]);
        Media[i] = (Nota1[i] + Nota2[i]) / 2.0;
        if (Media[i] >= 7.0)
        {
            strcpy(Situacao[i], "Aprovado\n");
            QuantAprovado++;
        }
        else if (Media[i] >= 5.0 && Media[i] < 7.0)
        {
            strcpy(Situacao[i], "Exame\n");
            QuantExame++;
        }
        else
        {
            strcpy(Situacao[i], "Reprovado\n");
            QuantReprovado++;
        }
        NotaGeral += Media[i];
    }

    printf("%s %-6s %-6s %-4s %s\n", "ALUNO", "PROVA 1", "PROVA 2", "MEDIA", "SITUACAO");
    for (int i = 0; i < Alunos; i++)
    {
        printf("%-1s %-7.1f %-7.1f %-5.1f %s\n", Aluno[i], Nota1[i], Nota2[i], Media[i], Situacao[i]);
    }

    MediaClasse = NotaGeral / Alunos;
    printf("Media da classe: %.1f\n",MediaClasse);
    printf("Percentual de alunos aprovados: %.1f%%\n",((float)QuantAprovado / Alunos)*100);
    printf("Percentual de alunos em exame: %.1f%%\n",((float)QuantExame / Alunos)*100);
    printf("Percentual de alunos reprovados: %.1f%%\n",((float)QuantReprovado / Alunos)*100);

    return 0;
}