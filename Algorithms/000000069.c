#include <stdio.h>

int main(){


    int QuantidadeSalarios = 0, 
    MaiorIdade,
    MenorIdade,
    QuantidadeMulherSalario200 = 0,
    IdadeMenorSalario,
    Idade;

    float Salario,
    MenorSalario, 
    TotalSalario = 0, 
    MediaSalarios;

    char Sexo,
    SexoMenorSalario;


    scanf("%d",&Idade);
    scanf(" %c",&Sexo);
    scanf("%f",&Salario);

    MaiorIdade = Idade;
    MenorIdade = Idade;
    
    SexoMenorSalario = Sexo;
    MenorSalario = Salario;
    IdadeMenorSalario = Idade;

    QuantidadeSalarios++;
    TotalSalario += Salario;
    
    if(Sexo == 'F' && Salario <= 200.00)
        QuantidadeMulherSalario200++;

    do{
        scanf("%d",&Idade);
        if(Idade > 0){
            scanf(" %c",&Sexo);
            scanf("%f",&Salario);

            TotalSalario += Salario;
            QuantidadeSalarios++;

            if(Sexo == 'F' && Salario <= 200.00)
                QuantidadeMulherSalario200++;
            
            if(Idade > MaiorIdade)
                MaiorIdade = Idade;
            else if(Idade < MenorIdade)
                MenorIdade = Idade;

            if(Salario < MenorSalario){
                MenorSalario = Salario;
                SexoMenorSalario = Sexo;
                IdadeMenorSalario = Idade;
            }           
        }
    }while(Idade > 0);

    MediaSalarios = TotalSalario / QuantidadeSalarios;

    printf("A media dos salarios do grupo: %.2f\n",MediaSalarios);
    printf("A maior idade: %d e menor idade do grupo: %d\n",MaiorIdade,MenorIdade);
    printf("A quantidade de mulheres com salário ate R$ 200.00: %d\n",QuantidadeMulherSalario200);
    printf("A idade: %d e o sexo: %c da pessoa que possui menor salario\n",IdadeMenorSalario,SexoMenorSalario);

    return 0;
}