#include <stdio.h>

int main(){

    float area, bmaior, bmenor, altura;
    printf("Base maior: ");
    scanf("%f",&bmaior);
    printf("Base menor: ");
    scanf("%f",&bmenor);
    printf("Altura: ");
    scanf("%f",&altura);
    area = ((bmaior + bmenor) * altura) / 2.0;
    printf("%.2f",area);


    return 0;
}