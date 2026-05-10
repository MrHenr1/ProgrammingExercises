#include <iostream>

int main()
{

    float basemaior, basemenor, area;
    std::cin >> basemaior;
    std::cin >> basemenor;

    area = (basemaior + basemenor) / 2.0;
    std::cout << "Área: " << area;
    return 0;
}