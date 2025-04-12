#include <iostream>

using namespace std;

struct No {
    int dado;
    No* proximo;
};

void inserirInicio(No*& head, int valor) {
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->proximo = head;
    head = novoNo;
}

void exibirLista(No* head) {
    No* temp = head;
    while (temp != NULL) {
        cout << temp->dado << " -> ";
        temp = temp->proximo;
    }
    cout << "NULL" << endl;
}

int main() {
    No* lista = NULL;
    inserirInicio(lista, 10);
    inserirInicio(lista, 20);
    inserirInicio(lista, 30);   
    
    cout << "Lista ligada: ";
    exibirLista(lista);
    
    return 0;
}

