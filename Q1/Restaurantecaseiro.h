#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "Mesarestaurante.h"

class Restaurantecaseiro
{
    public:
        void AdicionaPedido(int m, Pedido p);
        float calculaTotalRestaurante();

        Restaurantecaseiro();
        virtual ~Restaurantecaseiro();

    protected:

    private:
    Mesarestaurante mesas[100];
};

#endif // RESTAURANTECASEIRO_H
