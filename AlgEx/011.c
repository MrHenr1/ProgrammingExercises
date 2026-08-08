#include <stdio.h>

int main(){

    float area, diagmaior, diagmenor;
    printf("Diagonal maior: ");
    scanf("%f",&diagmaior);
    printf("Diagonal menor: ");
    scanf("%f",&diagmenor);
    area = (diagmaior * diagmenor) / 2.0;
    printf("%.2f",area);

    return 0;
}