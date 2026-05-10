#include <iostream>

int main()
{

    float peso;
    std::cin >> peso;
    float maispesada = peso * 1.15;
    float menospesada = peso * 0.80;
    std::cout << "Se você engordar 15%: " << maispesada << "\n";
    std::cout << "Se você emagrecer 20%: " << menospesada << "\n";

    return 0;
}