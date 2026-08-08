#include <stdio.h>

int main(){

    float salmin, salfunc;
    int quant;
    printf("Salario minimo: ");
    scanf("%f",&salmin);
    pritnf("Salario funcionario: ");
    scanf("%f",&salfunc);
    quant = salfunc / salmin;
    printf("%d\n",quant);

    return 0;
}