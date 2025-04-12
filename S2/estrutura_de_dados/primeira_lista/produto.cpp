#include <iostream>
#include <cstring>

using namespace std;

struct Produto {
    char nome[30];
    float preco;
};

int main() {
    Produto produtos[3];
    Produto *ptr = produtos;
    
    strcpy(produtos[0].nome, "Placa mae");
    produtos[0].preco = 500.00;
    
    strcpy(produtos[1].nome, "Processador");
    produtos[1].preco = 899.00;
    
    strcpy(produtos[2].nome, "Placa de video");
    produtos[2].preco = 1500.00;

    for (int i = 0; i < 3; i++) {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: " << (ptr + i)->nome << endl;
        cout << "Preco: R$ " << (ptr + i)->preco << endl;
        cout << "------------------" << endl;
    }

    return 0;
}

