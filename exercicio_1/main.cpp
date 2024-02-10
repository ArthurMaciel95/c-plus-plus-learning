#include <iostream>
#include <cmath>
int main()
{

    float x, y, z;

    std::cout << "Vamos calcular a hipotenusa de um triângulo retângulo.\n";
    std::cout << "Digite os valores do cateto oposto da hipotenusa: ";

    std::cin >> x;
    std::cin >> y;

    z = (x * x) + (y * y);

    std::cout << "A hipotenusa é: " << sqrt(z) << std::endl;

    return 0;
}