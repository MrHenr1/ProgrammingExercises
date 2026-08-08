#include <stdio.h>
#include <math.h>

int main(){

    float angulo, distanciaescada, medidaescada;
    scanf("%f",&angulo);
    scanf("%f",&distanciaescada);

    medidaescada = distanciaescada / cos(angulo);
    printf("%.0f",medidaescada);

    return 0;
}