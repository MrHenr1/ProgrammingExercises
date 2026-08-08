#include <stdio.h>

int main(){

    float ang1, ang2, ang3;
    scanf("%f",&ang1);
    scanf("%f",&ang2);
    ang3 = 180 - (ang1 + ang2);
    printf("%.1f\n",ang3);

    return 0;
}