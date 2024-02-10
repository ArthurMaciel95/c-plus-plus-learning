#include <iostream>

int main()
{
    int x;
    std::cout << "Digite um número: ";
    std::cin >> x;

    if (x > 5)
    {
        std::cout << " x é mais que 5";
        return 0;
    }
    else if (x == 5)
    {
        std::cout << 'x é igual a 5';
        return 0;
    }
    else
    {
        std::cout << 'x é menor que 5';
        return 0;
    };

    return 0;
}