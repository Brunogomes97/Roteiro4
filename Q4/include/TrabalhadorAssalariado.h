#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador
{
  public:
        TrabalhadorAssalariado(std::string);
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();
        double CalcularPagamento(int);
    protected:
};

#endif // TRABALHADORASSALARIADO_H
