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

int main() {
    setlocale(LC_ALL, "portuguese");

	int numero;
    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << numero << " � primo." << endl;
    } else {
        cout << numero << " n�o � primo." << endl;
    }

    return 0;
}
