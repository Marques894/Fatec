#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");

        float vetor1[7], vetor2[7], resultado[7];
    char operacoes[7];

    cout << "Digite 7 numeros para o primeiro vetor:\n";
    for (int i = 0; i < 7; i++) {
        cin >> vetor1[i];
    }

    cout << "Digite 7 numeros para o segundo vetor:\n";
    for (int i = 0; i < 7; i++) {
        cin >> vetor2[i];
    }

    cout << "Digite 7 operacoes (+, -, *, /) para o vetor de operacoes:\n";
    for (int i = 0; i < 7; i++) {
        cin >> operacoes[i];
    }

    for (int i = 0; i < 7; i++) {
        switch (operacoes[i]) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                if (vetor2[i] != 0) {
                    resultado[i] = vetor1[i] / vetor2[i];
                } else {
                    cout << "Erro: divisao por zero na posicao " << i << ".\n";
                    resultado[i] = 0;
                }
                break;
            default:
                cout << "Operacao invalida na posicao " << i << ".\n";
                resultado[i] = 0; 
        }
    }

    cout << "Resultados:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Resultado " << i + 1 << ": " << resultado[i] << "\n";
    }

    return 0;
}
