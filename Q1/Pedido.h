#ifndef PEDIDO_H
#define PEDIDO_H
#include<string>
using namespace std;
class Pedido
{
    public:
        Pedido();
        int getNumero();
        int getQuantidade();
        string getDescricao();
        float getPreco();
        void setNumero(int );
        void setQuantidade(int);
        void setDescricao(string);
        void setPreco(float);
        virtual ~Pedido();

    protected:

    private:
        int numero,quantidade;
        string descricao;
        float preco;
};
#endif // PEDIDO_H
