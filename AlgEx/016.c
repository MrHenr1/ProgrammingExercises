#include <stdio.h>
#include <math.h>

int main(){

    float cat1, cat2, hipo;
    scanf("%f",&cat1);
    scanf("%f",&cat2);
    hipo = sqrt(pow(cat1,2) + pow(cat2,2));
    printf("%.2f",hipo);

    return 0;
}