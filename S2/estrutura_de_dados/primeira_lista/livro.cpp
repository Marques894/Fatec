#include <iostream>
#include <cstring>

using namespace std;

struct Livro {
    char* titulo;
    int ano;
};

void criarLivro(Livro* l, const char* titulo, int ano) {
    l->titulo = new char[strlen(titulo) + 1];
    strcpy(l->titulo, titulo);
    l->ano = ano;
}

void liberarLivro(Livro* l) {
    delete[] l->titulo;
}

int main() {
    Livro meuLivro;
    criarLivro(&meuLivro, "Percy Jackson", 2005);
    
    cout << "Titulo: " << meuLivro.titulo << endl;
    cout << "Ano: " << meuLivro.ano << endl;

    liberarLivro(&meuLivro);
    return 0;
}

