#include <stdio.h>
#include <math.h>

int main(){


    int qntprimos = 0,qntdivisores = 1;

    for(int i = 0; i < 10; i++){
        int n,p;
        scanf("%d",&n);
        p = sqrt(n);
        for(int i = 2; i < p; i++){
            if(p % i != 0){
                qntdivisores++;
            }
        }
        if(qntdivisores == 1){
            qntprimos++;
        }
    }
    printf("%d\n",qntprimos);

    return 0;
}