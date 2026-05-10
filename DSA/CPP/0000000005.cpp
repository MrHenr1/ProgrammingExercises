#include <iostream>

int main()
{

    float valororiginal, valornovo, desconto;

    std::cin >> valororiginal;
    desconto = valororiginal * 0.10;
    valornovo = valororiginal - desconto;
    std::cout << valornovo;

    return 0;
}