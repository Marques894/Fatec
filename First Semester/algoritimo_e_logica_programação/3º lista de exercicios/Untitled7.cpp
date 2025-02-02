#include <iostream> 
#include <locale>
#include <string>

using namespace std;

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");

	int numero;
    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << numero << " é primo." << endl;
    } else {
        cout << numero << " não é primo." << endl;
    }

    return 0;
}
