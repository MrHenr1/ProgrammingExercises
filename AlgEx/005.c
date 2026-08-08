#include <stdio.h>

int main(){

    float preco,novopreco;
    scanf("%f",&preco);
    novopreco = preco * 0.9;
    printf("%.2f",novopreco);

    return 0;
}