#include <stdio.h>

int main(){

    int hora, minutos, segundos;
    scanf("%d",&hora);
    minutos = (60 * hora) + (hora % 60);
    segundos = minutos * 60;
    printf("%d\n",hora * 60);
    printf("%d\n",minutos);
    printf("%d\n",segundos);

    return 0;
}