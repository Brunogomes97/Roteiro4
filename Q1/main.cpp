#include <iostream>
#include "Mesarestaurante.h"
#include <string>
#include "Restaurantecaseiro.h"
using namespace std;

int main()
{
    Pedido pedido1;
    Restaurantecaseiro restaurante;
    int k, i=0, a,b;
    string j;
    float l,valor;

    while(1)
    {
        cout<<"Qual o numero do pedido ?"<<endl;
        cin>>k;

        pedido1.setNumero(k);


        cout<<"Qual a quantidade?"<<endl;
        cin>>k;
        pedido1.setQuantidade(k);

        cout<<"Descricao do pedido?"<<endl;
        cin>>j;
        pedido1.setDescricao(j);

        cout<<"Qual o Preco?"<<endl;
        cin>>l;
        pedido1.setPreco(l);

        cout<<"Qual a mesa?"<<endl;
        cin>>b;

        restaurante.AdicionaPedido(b,pedido1);
        cout<<"Deseja Fazer outro pedido\n    1 = sim 2= nao?"<<endl;
        cin>>a;
        if(a==2){

            break;
        }


    }

    valor=restaurante.calculaTotalRestaurante();
    cout<<"Total Bruto ="<<valor<<endl;
    return 0;
}
