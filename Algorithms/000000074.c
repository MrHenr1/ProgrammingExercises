#include <stdio.h>

int main(){

    int op,
    Meses;

    float Salario,
    NovoSalario,
    DecimoTerceiro,
    Ferias;

    do{
        printf("1. Novo salário\n");
        printf("2. Férias\n");
        printf("3. Décimo Terceiro\n");
        printf("4. Sair\n");
        printf("> ");
        scanf("%d",&op);

        if(op != 4){
            scanf("%f",&Salario);
            switch(op){
                case 1:
                    if(Salario < 210.00)
                        NovoSalario = Salario * 1.15;
                    else if(Salario >= 210.00 && Salario <= 600.00)
                        NovoSalario = Salario * 1.10;
                    else
                        NovoSalario = Salario * 1.05;
                    printf("Novo Salário: %.2f\n",NovoSalario);
                    break;
                case 2:
                    Ferias = Salario + (Salario/3);
                    printf("Ferias: %.2f\n",Ferias);
                    break;
                case 3:
                    scanf("%d",&Meses);
                    DecimoTerceiro = (Salario * Meses) / 12;
                    printf("Decimo Terceiro: %.2f\n",DecimoTerceiro);
                    break;
                default:
                    printf("Opção inválida. Tente Novamente!\n");
            }
        }
    
    }while(op != 4);

    return 0;
}