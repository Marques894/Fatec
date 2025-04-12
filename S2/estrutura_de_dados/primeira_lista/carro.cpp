#include <iostream>
#include <cstring>
using namespace std;

struct Carro {
    char marca[20];
    int ano;
};

void alterarAno(Carro *c, int novoAno) {
    c->ano = novoAno;
}

int main() {
    Carro meuCarro;
    strcpy(meuCarro.marca, "BMW");
    meuCarro.ano = 2017;
    
    cout << "Marca: " << meuCarro.marca << endl;
    cout << "Ano antes da alteracao: " << meuCarro.ano << endl;
    
    alterarAno(&meuCarro, 2022);
    cout << "Ano apos a alteracao: " << meuCarro.ano << endl;

    return 0;
}


