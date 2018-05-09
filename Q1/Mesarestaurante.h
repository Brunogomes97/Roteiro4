#ifndef MESARESTAURANTE_H
#define MESARESTAURANTE_H
#include "Pedido.h"

class Mesarestaurante
{
    public:
        float Calculatotal();
        void zeraPedido();
        void adicionaPedido(Pedido p);
        Mesarestaurante();
        virtual ~Mesarestaurante();

    protected:

    private:
    Pedido pedidos[100];
    int nPedidos;
};

#endif // MESARESTAURANTE_H
