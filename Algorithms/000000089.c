#include <stdio.h>
#include <string.h>

int main()
{

    float Nota[8], Media, SomaTotalAlunos = 0;
    char Aluno[8][50], Nome[50];

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o nome do Aluno %d: ", i + 1);
        scanf(" %49s", &Aluno[i]);
        strcpy(Nome, Aluno[i]);
        printf("Digite a nota do/da %s: ", Nome);
        scanf("%f*c", &Nota[i]);
    }

    printf("================================\n");
    printf("RELATORIO FINAL DAS NOTAS\n");
    printf("================================\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%s %.1f\n", Aluno[i], Nota[i]);
        SomaTotalAlunos += Nota[i];
    }
    Media = SomaTotalAlunos / 8;
    printf("Media da classe: %.1f\n", Media);

    return 0;
}