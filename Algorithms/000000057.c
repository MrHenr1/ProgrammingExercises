#include <stdio.h>

int main()
{

    int idade, qntsup50 = 0;
    float peso, 
    altura, 
    totalalturas = 0,
    medialturas, 
    qntalturas = 0, 
    percent40 = 0,
    qntpessoas40 = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d*c", &idade);
        scanf("%f*c", &altura);
        scanf("%f*c", &peso);
        if (idade > 50)
            qntsup50++;
        if (idade >= 10 && idade <= 20){
            qntalturas++;
            totalalturas += altura;
        }
        if(peso < 40)
            qntpessoas40++;
    }

    percent40 = (qntpessoas40 / 5) * 100;
    medialturas = totalalturas / qntalturas;
    
    printf("A quantidade de pessoas com idade superior a 50 anos: %d\n",qntsup50);
    printf("A média das alturas das pessoas com idade entre 10 e 20 anos: %.2fm\n",medialturas);
    printf("A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas: %.0f%%\n",percent40);

    return 0;
}