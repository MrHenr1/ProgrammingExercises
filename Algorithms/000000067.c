#include <stdio.h>

int main(){
    
    
    int idade,qntidades = 0;
    float mediaidades,totalidades = 0;

    scanf("%d",&idade);

    while(idade != 0){
        qntidades++;
        totalidades = totalidades + idade;
        scanf("%d",&idade);
    }

    mediaidades = totalidades / qntidades;
    printf("Média das idades: %.0f",mediaidades);
    return 0;
}