#include <stdio.h>

int main(){

    float salario, conta1, conta2, restantesalario;

    scanf("%f",&salario);
    scanf("%f",&conta1);
    scanf("%f",&conta2);
    restantesalario = salario - ((conta1 + conta2) * 1.02);
    printf("%.2f",restantesalario);

    return 0;
}