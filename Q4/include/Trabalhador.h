#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
#include <stdio.h>

class Trabalhador
{
    public:
        Trabalhador(std::string);
        Trabalhador();
        virtual ~Trabalhador();
        double CalcularPagamento(int);
        double getSalario();
        void setSalario(double);
        std::string getNome();
    protected:
        double salario;
        std::string nome;

};

#endif // TRABALHADOR_H
