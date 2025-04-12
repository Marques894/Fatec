#include <iostream>

using namespace std;

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    Aluno* aluno = new Aluno;
    cout << "Digite o nome do aluno: ";
    cin.getline(aluno->nome, 50);
    cout << "Digite a nota do aluno: ";
    cin >> aluno->nota;
    
    cout << "\nDados do Aluno: " << endl;
    cout << "Nome: " << aluno->nome << endl;
    cout << "Nota: " << aluno->nota << endl;

    delete aluno;
    return 0;
}

