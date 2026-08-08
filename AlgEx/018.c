#include <stdio.h>

int main(){


    float celsius, fahrenheit;

    scanf("%f",&celsius);
    fahrenheit = 180 * (celsius + 32) / 100;
    printf("%.0f\n",fahrenheit);

    return 0;
}