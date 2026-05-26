#include <stdio.h>

int main(){

    int idade,p1 = 0,p2 = 0,p3 = 0,p4 = 0,p5 = 0,qntotal;

    for(int i = 0; i < 8; i++){
        scanf("%d*c",&idade);
        if(idade <= 15)
            p1++;
        else if(idade >= 16 && idade <= 30)
            p2++;
        else if(idade >= 31 && idade <= 45)
            p3++;
        else if(idade >= 46 && idade <= 60)
            p4++;
        else
            p5++;
    }

    qntotal = p1 + p2 + p3 + p4 + p5;

    printf("Quantidade de pessoas da primeira faixa etária: %d\n",p1);
    float porcentagemp1,porcentagemp5;

    porcentagemp1 = (float) (p1*100)/qntotal;
    porcentagemp5 = (float) (p5*100)/qntotal;

    printf("Porcentagem de pessoas da primeira faixa: %.2f%%\n",porcentagemp1);
    printf("Porcentagem de pessoas da ultima faixa: %.2f%%\n",porcentagemp5);
    

    return 0;
}