#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");

int N;
    
    cout << "Digite o tamanho dos vetores: ";
    cin >> N;

    int A[N], B[N], C[N], D[N];
    int somaA = 0, somaB = 0, produtoEscalar = 0;
    
    cout << "Digite os elementos do vetor A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        somaA += A[i];
    }

    cout << "Digite os elementos do vetor B:\n";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
        somaB += B[i];
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    for (int i = 0; i < N; i++) {
        D[i] = A[i] - B[i];
    }

    for (int i = 0; i < N; i++) {
        produtoEscalar += A[i] * B[i];
    }

    cout << "\nSoma dos elementos de A: " << somaA << endl;
    cout << "Soma dos elementos de B: " << somaB << endl;

    cout << "\nVetor C (A + B): ";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    cout << "Vetor D (A - B): ";
    for (int i = 0; i < N; i++) {
        cout << D[i] << " ";
    }
    cout << endl;

    cout << "Produto escalar de A e B: " << produtoEscalar << endl;

    return 0;
}
