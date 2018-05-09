#include "Mesarestaurante.h"
#include <iostream>
Mesarestaurante::Mesarestaurante()
{
    nPedidos = 0;
    //ctor
}

Mesarestaurante::~Mesarestaurante()
{
    //dtor
}
float Mesarestaurante::Calculatotal(){
int i;

float total=0;

    for(i=0;i<100;i++){


    total+= pedidos[i].getPreco()*pedidos[i].getQuantidade();



    }


return total;
}
void Mesarestaurante :: zeraPedido(){
int i;
    for(i=0;i<100;i++){

        pedidos[i].setQuantidade(0);

    }

}
void Mesarestaurante :: adicionaPedido(Pedido p){

pedidos[nPedidos]=p;
nPedidos++;


}
