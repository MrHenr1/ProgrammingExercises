#include <stdio.h>

int main(){

    float qntdin;
    float dolar, marco, libra;
    dolar = qntdin / 1.80;
    marco = qntdin / 2.00;
    libra = qntdin / 3.57;

    printf("%.2f\n",dolar);
    printf("%.2f\n",marco);
    printf("%.2f\n",libra);

    return 0;
}