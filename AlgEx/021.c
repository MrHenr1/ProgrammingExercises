#include <stdio.h>

int main(){

    int htrabalhadas, hextrabalhadas; 
    float horatrabalhada, horaextra, salariominimo, salariobruto, extra, salario;
    scanf("%d",&htrabalhadas);
    scanf("%f",&salariominimo);
    horatrabalhada = salariominimo / 8;
    horaextra = salariominimo / 4;
    salariobruto = hextrabalhadas * horatrabalhada;
    extra = horaextra * hextrabalhadas;
    salario = salariobruto + extra;
    printf("%.2f",salario);

    return 0;
}