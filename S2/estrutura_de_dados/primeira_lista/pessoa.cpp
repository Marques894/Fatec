#include <iostream>
#include <cstring>

using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
};

void modificarIdade(Pessoa** p, int novaIdade) {
    (*p)->idade = novaIdade;
}

int main() {
    Pessoa pessoa;
    strcpy(pessoa.nome, "Tiago");
    pessoa.idade = 25;
    
    cout << "Idade antes: " << pessoa.idade << endl;
    
    Pessoa* ptr = &pessoa;
    modificarIdade(&ptr, 40);

    cout << "Idade depois: " << pessoa.idade << endl;

    return 0;
}

