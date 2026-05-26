#include <stdio.h>

int main()
{

    int c1 = 0,
        c2 = 0,
        c3 = 0,
        c4 = 0,
        votonulo = 0,
        votoembranco = 0,
        codigo,
        totalvotos;

    float porcentVotoNulo, porcentVotoBranco;

    do
    {
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            votonulo++;
            break;
        case 6:
            votoembranco++;
            break;
        default:
            printf("Candidato invalido! Realize um voto valido.\n");
        }

    } while (codigo != 0);

    totalvotos = c1 + c2 + c3 + c4 + votoembranco + votonulo;

    if (votoembranco != 0)
        porcentVotoBranco = ((float)votoembranco / (float)totalvotos) * 100;
    else
        porcentVotoBranco = 0;

    if (votonulo != 0)
        porcentVotoNulo = ((float)votonulo / (float)totalvotos) * 100;
    else
        porcentVotoNulo = 0;

    printf("Total de votos de cada candidato:\n");
    printf("Candidato 1: %d\n", c1);
    printf("Candidato 2: %d\n", c2);
    printf("Candidato 3: %d\n", c3);
    printf("Candidato 4: %d\n", c4);
    printf("Total de votos nulos: %d\n", votonulo);
    printf("Total de votos em branco: %d\n", votoembranco);
    printf("Porcentagem de votos nulos: %.2f%%\n", porcentVotoNulo);
    printf("Porcetangem de votos em branco: %.2f%%\n", porcentVotoBranco);

    return 0;
}