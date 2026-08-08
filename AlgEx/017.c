#include <stdio.h>
#define pi 3.1415

int main(){

    float raio, comprimento, area, volume;
    scanf("%f",&raio);
    comprimento = 2 * pi * raio;
    area = pi * pow(raio,2);
    volume = (3 * pi * pow(raio,3)) / 4;
    printf("%.2f\n",comprimento);
    printf("%.2f\n",area);
    printf("%.2f\n",volume);


    return 0;
}