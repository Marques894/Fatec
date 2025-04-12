#include <iostream>

using namespace std;

struct Funcionario {
    char nome[50];
    float salario;
};

int main() {
    int tamanho = 5;
    Funcionario* funcionarios = new Funcionario[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o nome do funcionario " << i + 1 << ": ";
        cin.ignore();
        cin.getline(funcionarios[i].nome, 50);
        cout << "Digite o salario do funcionario: ";
        cin >> funcionarios[i].salario;
    }

    cout << "\nLista de Funcionarios: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Funcionario " << i + 1 << ": " << funcionarios[i].nome
             << " - Salario: R$ " << funcionarios[i].salario << endl;
    }

    delete[] funcionarios;
    return 0;
}

