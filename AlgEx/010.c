#include <stdio.h>

int main(){

    float area, lado;
    printf("Lado: ");
    scanf("%f",&lado);
    area = lado * lado;
    printf("%.2f\n",area);

    return 0;
}