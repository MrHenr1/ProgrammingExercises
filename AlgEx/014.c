#include <stdio.h>

int main(){

    int annascimento, ano, meses, dias, semanas;
    scanf("%d",&annascimento);
    ano = 2026 - annascimento;
    meses = ano * 12;
    dias = ano * 365;
    semanas = ano * 35; 

    printf("%d\n",ano);
    printf("%d\n",meses);
    printf("%d\n",semanas);
    printf("%d\n",dias);


    return 0;
}