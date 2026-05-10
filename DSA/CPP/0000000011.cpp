#include <iostream>

int main()
{

    float diagonalmaior, diagonalmenor, area;
    std::cin >> diagonalmaior;
    std::cin >> diagonalmenor;
    area = (diagonalmaior * diagonalmenor) / 2;
    std::cout << "Área do losango: " << area << "\n";
    return 0;
}