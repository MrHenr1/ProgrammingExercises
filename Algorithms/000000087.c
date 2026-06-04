#include <stdio.h>

int main(){

    int vet[10],
    QuantImpar = 0,
    QuantPar = 0, 
    Pos = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d",&vet[i]);
        if(vet[i] % 2 == 0)
            QuantPar++;
        else
            QuantImpar++;
    }

    int vetI[QuantImpar], vetP[QuantPar];
    
    for(int i = 0; i < 10; i++){
        if(vet[i] % 2 != 0){
            vetI[Pos] = vet[i];
            Pos++;
        }
    }
    
    Pos = 0;

    for(int i = 0; i < 10; i++){
        if(vet[i] % 2 == 0){
            vetP[Pos] = vet[i];
            Pos++;
        }
    }

    for(int i = 0; i < QuantPar; i++){
        printf("%d ",vetP[i]);
    }
    printf("\n");

    for(int i = 0; i < QuantImpar; i++){
        printf("%d ",vetI[i]);
    }

    return 0;
}