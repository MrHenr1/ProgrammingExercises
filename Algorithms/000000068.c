#include <stdio.h>

int main()
{

    int canal4 = 0,
        canal5 = 0,
        canal7 = 0,
        canal12 = 0,
        numeropessoas,
        canalassistindo,
        total = 0;
    float pCanal4,pCanal5,pCanal7,pCanal12;

    do
    {
        scanf("%d", &canalassistindo);
        if(canalassistindo != 0){
            scanf("%d", &numeropessoas);
        }
        switch (canalassistindo)
        {
        case 4:
            canal4 += numeropessoas;
            break;
        case 5:
            canal5 += numeropessoas;
            break;
        case 7:
            canal7 += numeropessoas;
            break;
        case 12:
            canal12 += numeropessoas;
            break;
        }
    }while(canalassistindo != 0);

    total = canal4 + canal5 + canal7 + canal12;

    if(canal4 != 0){
        pCanal4 = ((float)canal4 / (float)total) * 100;
    }
    else{
        pCanal4 = 0;
    }

    
    if(canal5 != 0){
        pCanal5 = ((float)canal5 / (float)total) * 100;
    }
    else{
        pCanal5 = 0;
    }

    
    if(canal7 != 0){
        pCanal7 = ((float)canal7 / (float)total) * 100;
    }
    
    else{
        pCanal7 = 0;
    }

    
    if(canal12 != 0){
        pCanal12 = ((float)canal12 / (float)total) * 100;
    }
    else{
        pCanal12 = 0;
    }

    printf("Audiência do Canal 4: %d e sua Porcentagem: %.1f%%\n", canal4,pCanal4);
    printf("Audiência do Canal 5: %d e sua Porcentagem: %.1f%%\n", canal5,pCanal5);
    printf("Audiência do Canal 7: %d e sua Porcentagem: %.1f%%\n", canal7,pCanal7);
    printf("Audiência do Canal 12: %d e sua Porcentagem: %.1f%%\n", canal12,pCanal12);

    return 0;
}