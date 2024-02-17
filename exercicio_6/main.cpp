// 1. Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos  necessários para sets e gets e também um métodos para imprimir os dados de uma pessoa.

#include <iostream>
#include <string>

class Pessoa
{

private:
    std::string _nome;
    int _idade;
    float _altura;

public:
    Pessoa(std::string nome, int idade, float altura)
    {
        _nome = nome;
        _idade = idade;
        _altura = altura;
    }

    void getName()
    {
        std::cout << "Seu nome é: " << _nome << "\n";
    }

    void getIdade()
    {
        std::cout << "sua Idade é: " << _idade << "\n";
    }

    void getAltura()
    {
        std::cout << "Sua Altura é: " << _altura << "\n";
    }

    void setName(std::string nome)
    {
        _nome = nome;
    }

    void setIdade(int idade)
    {
        _idade = idade;
    }

    void setAltura(float altura)
    {
        _altura = altura;
    }
};

int main()
{

    Pessoa pessoa("Arthur", 20, 1.80);

    pessoa.setAltura(1.80);
    pessoa.setIdade(20);
    pessoa.setName("Arthur");

    pessoa.getAltura();
    pessoa.getName();
    pessoa.getName();
}
