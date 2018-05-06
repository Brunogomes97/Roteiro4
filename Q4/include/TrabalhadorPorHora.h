#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora:public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string);
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();
        double CalcularPagamento(int);
    protected:

};

#endif // TRABALHADORPORHORA_H
