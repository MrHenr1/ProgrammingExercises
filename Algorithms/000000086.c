#include <stdio.h>
#define VET1 10
#define VET2 5

int main(){

    int vetor1[VET1],
    vetor2[VET2],
    QuantPar = 0,
    QuantImpar = 0, 
    Pos = 0,
    Divisores = 0;

    for(int i = 0;  i < VET1; i++){
        scanf("%d",&vetor1[i]);
        if(vetor1[i] % 2 == 0)
            QuantPar++;
        if(vetor1[i] % 2 != 0)
            QuantImpar++;
    }
    for(int i = 0; i < VET2; i++){
        scanf("%d",&vetor2[i]);
    }

    int vetor1R[QuantPar];
    int vetor2R[QuantImpar];

    printf("Vetor 1 resultante:\n");

    for(int i = 0; i < VET1; i++){
        if(vetor1[i] % 2 == 0){
            vetor1R[Pos] = vetor1[i];
            for(int j = 0;  j < VET2; j++){
                vetor1R[Pos] += vetor2[j];
            }
            Pos++;
        }
    }

    Pos = 0;
    
    for(int i = 0; i < QuantPar; i++)
        printf("%d ",vetor1R[i]);
    
    printf("\n");

    printf("Vetor 2 resultante:\n");

    for(int i = 0; i < VET1; i++){
        if(vetor1[i] % 2 != 0){
            vetor2R[Pos] = Divisores;
            for(int j = 0; j < VET2; j++){
                if(vetor1[i] % vetor2[j] == 0){
                    vetor2R[Pos]++;
                }
            }
            Pos++;
        }
    }

    for(int i = 0; i < QuantImpar; i++)
        printf("%d ",vetor2R[i]);
    
    return 0;
}