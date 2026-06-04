#include <stdio.h>

int main(){

    int CursoLogica[15], CursoProgramacao[10],Matricula;

    printf("CURSO DE LOGICA\n");
    for(int i = 0; i < 15; i++){
        scanf("%d",&Matricula);
        CursoLogica[i] = Matricula;
    }
    printf("CURSO DE PROGRAMACAO\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&Matricula);
        CursoProgramacao[i] = Matricula;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 15; j++){
            if(CursoLogica[j] == CursoProgramacao[i]){
                printf("%d ",CursoProgramacao[i]);
            }
        }
    }

    return 0;
}