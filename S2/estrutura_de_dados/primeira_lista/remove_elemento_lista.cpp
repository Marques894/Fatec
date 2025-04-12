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

void removerElemento(No*& head, int valor) {
    if (head == NULL) return;

    if (head->dado == valor) {
        No* temp = head;
        head = head->proximo;
        delete temp;
        return;
    }

    No* temp = head;
    while (temp->proximo != NULL && temp->proximo->dado != valor) {
        temp = temp->proximo;
    }

    if (temp->proximo != NULL) {
        No* noDelete = temp->proximo;
        temp->proximo = temp->proximo->proximo;
        delete noDelete;
    }
}

int main() {
    No* lista = NULL;
    
    inserirInicio(lista, 10);
    inserirInicio(lista, 20);
    inserirInicio(lista, 30);
    
    cout << "Lista antes da remocao: ";
    exibirLista(lista);
    
    removerElemento(lista, 20);
    
    cout << "Lista depois da remocao: ";
    exibirLista(lista);
    
    return 0;
}

