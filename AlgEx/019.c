#include <stdio.h>

int main(){

    int comprimento, largura, mwats;
    scanf("%d",&comprimento);
    scanf("%d",&largura);
    mwats = (comprimento * largura) * 18;
    printf("%d\n",mwats);   

    return 0;
}