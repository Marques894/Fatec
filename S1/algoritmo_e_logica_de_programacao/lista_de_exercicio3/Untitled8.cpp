#include <iostream> 
#include <locale>
#include <string>

using namespace std;

	bool ehPerfeito(int num) {
    if (num <= 1) {
        return false; 
    }

    int somaDivisores = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i; 
        }
    }

    return somaDivisores == num;
}	

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero;
    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> numero;

    if (ehPerfeito(numero)) {
        cout << numero << " � perfeito." << endl;
    } else {
        cout << numero << " n�o � perfeito." << endl;
    }

    return 0;
}
