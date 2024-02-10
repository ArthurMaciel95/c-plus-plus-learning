#include <iostream>

int main()
{

    // side of triangle

    float side_1, side_2, side_3;

    bool is_triangle(float side_1, float side_2, float side_3);

    std::cout << "Digite os 3 valores dos lados de triângulo: \n";

    std::cin >> side_1;
    std::cin >> side_2;
    std::cin >> side_3;

    if (is_triangle(side_1, side_2, side_3))
    {
        std::cout << "É um Triângulo";
    }
    else
    {
        std::cout << "Não é um Triângulo \n";
    }

    return 0;
}

bool is_triangle(float side_1, float side_2, float side_3)
{
    return side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_1 + side_3 > side_2;
};
