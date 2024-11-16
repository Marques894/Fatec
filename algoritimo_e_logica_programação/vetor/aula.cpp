#include <iostream>
using namespace std;

int main() {
    // Declarando um vetor 
    int vetor [10];

    // Atribuindo valor já na declaração!
    int vetor2[10] = {1,22,53,4,75,66,700,81,98};

    // Preenchendo o vetor com dados do ususario
    cout << "Informe o primeiro numero: ";
    cin >> vetor[0];

    cout << "Informe o segundo numero: ";
    cin >> vetor[1];

    cout << "Informe o terceiro numero: ";
    cin >> vetor[2];

    cout << "Informe o quarto numero: ";
    cin >> vetor[3];

    cout << "Informe o quinto numero: ";
    cin >> vetor[4];

    // Atribuindo o valor de forma manual
    vetor[5] = 190;
    vetor[6] = 230;
    vetor[7] = 111;
    vetor[8] = 321;
    vetor[9] = 567;

    // Mostrando os dados do vetor 
    cout << "[0]= " << vetor[0] << endl;
    cout << "[1]= " << vetor[1] << endl;
    cout << "[2]= " << vetor[2] << endl;
    cout << "[3]= " << vetor[3] << endl;
    cout << "[4]= " << vetor[4] << endl;
    cout << "[5]= " << vetor[5] << endl;
    cout << "[6]= " << vetor[6] << endl;
    cout << "[7]= " << vetor[7] << endl;
    cout << "[8]= " << vetor[8] << endl;
    cout << "[9]= " << vetor[9] << endl;

    cout << "vetor2" << vetor2[10] << endl;

}