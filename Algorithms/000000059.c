#include <stdio.h>

int main()
{

    int idade,
        idadetotal = 0,
        qntpeso90altura150 = 0,
        pessoas10e30 = 0,
        pessoasmed190 = 0;

    float altura,
        peso,
        percentpessoas10e30 = 0,
        mediaidades = 0,
        mediaalturas = 0,
        alturatotal = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &idade);
        scanf("%f", &peso);
        scanf("%f", &altura);

        idadetotal += idade;
        alturatotal += altura;

        if (peso > 90 && altura < 1.50)
            qntpeso90altura150++;
        if (altura > 1.90)
            pessoasmed190++;
        if (idade >= 10 && idade <= 30 && altura > 1.90)
            pessoas10e30++;
    }

    mediaidades = idadetotal / 10;
    printf("A média das idades das dez pessoas: %.2f\n", mediaidades);
    mediaalturas = alturatotal / 10;
    printf("A média das alturas das dez pessoas: %.2f\n", mediaalturas);
    printf("A quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro: %d\n", qntpeso90altura150);
    percentpessoas10e30 = ((float)pessoas10e30 / (float)pessoasmed190) * 100;
    printf("A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90m: %.2f%%\n", percentpessoas10e30);

    return 0;
}