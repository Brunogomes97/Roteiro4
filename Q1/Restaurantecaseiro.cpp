#include "Restaurantecaseiro.h"
#include "iostream"
Restaurantecaseiro::Restaurantecaseiro()
{
    //ctor
}

Restaurantecaseiro::~Restaurantecaseiro()
{
    //dtor
}
void Restaurantecaseiro :: AdicionaPedido(int m,Pedido p){

mesas[m].adicionaPedido(p);

}


float Restaurantecaseiro :: calculaTotalRestaurante(){
int i,j;
float k=0,valormesa;

    for(i=0;i<100;i++){

    j=mesas[i].Calculatotal();

            if(j>0){

            cout<<"mesa "<<i<<" total"<<j<<endl;
        }


    k+=mesas[i].Calculatotal();


    }


return k;

}
