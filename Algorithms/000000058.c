#include <stdio.h>

int main()
{

    int idade,
        qntpessoas50e60 = 0,
        qntpessoas150 = 0,
        qntolhos = 0,
        qntolhosazuis = 0,
        qntpessoasruivasnzul = 0;

    float peso,
        altura,
        mediaalturas150 = 0,
        porcentolhosazuis;

    char corcabelo,
        corolhos;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &idade);
        scanf("%f", &peso);
        scanf("%f", &altura);
        getchar();
        scanf("%c", &corolhos);
        getchar();
        scanf("%c", &corcabelo);
        getchar();

        if (idade > 50 && peso < 60)
            qntpessoas50e60++;
        if (altura < 1.50)
        {
            qntpessoas150++;
            mediaalturas150 += altura;
        }
        if (corolhos == 'A')
        {
            qntolhosazuis++;
        }
        if (corcabelo == 'R' && corolhos != 'A')
        {
            qntpessoasruivasnzul++;
        }
    }

    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n");
    mediaalturas150 = mediaalturas150 / qntpessoas150;
    printf("A média das idades das pessoas com altura inferior a 1.50m: %.2f\n", mediaalturas150);
    porcentolhosazuis = (qntolhosazuis / 5) * 100;
    printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.0f%%\n", porcentolhosazuis);
    printf("A quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", qntpessoasruivasnzul);

    return 0;
}