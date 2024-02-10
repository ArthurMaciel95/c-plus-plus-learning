#include <iostream>

int main()
{

    int number;
    printf("Digite um número: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Número não pode ser negativo \n");
        return -1;
    };

    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j < number; j++)
        {
            printf("#");
        }
        printf("#\n");
    };

    printf("O número digitado foi: %d\n", number);
}