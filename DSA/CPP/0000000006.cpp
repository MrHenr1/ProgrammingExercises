#include <iostream>

int main()
{

    float valorvendas,
        salariofixo,
        comissao,
        salariofinal;

    std::cin >> salariofixo;
    std::cin >> valorvendas;
    comissao = 0.04 * valorvendas;
    salariofinal = comissao + salariofixo;
    std::cout << "Comissao: R$ " << comissao << "\n";
    std::cout << "Salário Final: R$ " << salariofinal << "\n";

    return 0;
}