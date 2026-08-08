#include <stdio.h>

int main(){

    float x,y,media;

    scanf("%f",&x);
    scanf("%f",&y);

    media = (x * 2 + y * 3) / (5);

    printf("%.2f",media);


    return 0;
}