#include <stdio.h>

int main(){

    int nlados, ndiagonais;
    scanf("%d",&nlados);
    ndiagonais = nlados * (nlados - 3) / 2;
    printf("%d\n",ndiagonais);

    return 0;
}