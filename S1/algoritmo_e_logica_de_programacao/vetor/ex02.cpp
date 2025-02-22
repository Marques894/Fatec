#include <iostream>
#include <locale> // Biblioteca para suporte a localidade (acentuação).
#include <string>    // Biblioteca para uso de strings

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para português.

    int vetor[4];

    cout << "Digite o primeiro numero: ";
    cin >> vetor[0];

    cout << "Digite o segundo numero: ";
    cin >> vetor[1];

    cout << "Digite o teceiro numero: ";
    cin >> vetor[2];

    cout << "Digite o quarto numero: ";
    cin >> vetor[3];

    cout << "[3]= " << vetor[3] << endl;
    cout << "[2]= " << vetor[2] << endl;
    cout << "[1]= " << vetor[1] << endl;
    cout << "[0]= " << vetor[0] << endl;

    return 0;
}