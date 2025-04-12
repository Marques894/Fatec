#include <iostream>
#include <locale>

using namespace std;

struct Produto{
    string nome;
    float preco;
    int quantidade;
    float total_estoque;
};

int main(){

    struct Produto produto;

    cout << "Digite o nome do produto: \n";
    cin >> produto.nome;

    cout << "Digite o preco do produto: \n";
    cin >> produto.preco;

    cout << "Digite a quantidade: \n";
    cin >> produto.quantidade;

    produto.total_estoque = produto.quantidade * produto.preco;

    cout << "quantidade: \n";
    cout << produto.quantidade;
    cout << "\n";

    cout << "Total de estoque em preco: \n";
    cout << produto.total_estoque;

    return 0;
}