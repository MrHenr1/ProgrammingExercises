#include <iostream>

int main()
{

    float salariofuncionario, salariominimo;
    int quantidade;

    std::cin >> salariominimo;
    std::cin >> salariofuncionario;

    quantidade = salariofuncionario / salariominimo;

    std::cout << quantidade << " Salários minimos.\n";

    return 0;
}