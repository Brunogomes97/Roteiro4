#include "Pedido.h"

Pedido::Pedido()
{
    numero=0;
    quantidade=0;
    descricao="Espetinho";
    preco=0;
}

Pedido::~Pedido()
{
    //dtor
}
int Pedido :: getNumero(){

return numero;

}
int Pedido :: getQuantidade(){

return quantidade;

}
string Pedido :: getDescricao(){

return descricao;

}
float Pedido :: getPreco(){

return preco;

}
void Pedido :: setNumero(int i){

numero=i;

}
void Pedido:: setQuantidade(int j){

quantidade=j;
}
void Pedido :: setDescricao(string k){
descricao=k;

}
void Pedido :: setPreco(float l){


preco=l;


}

