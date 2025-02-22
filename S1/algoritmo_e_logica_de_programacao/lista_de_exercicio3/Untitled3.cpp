#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");

    int N;

    cout << "Digite o tamanho do vetor: ";
    cin >> N;

    int A[N];

    cout << "Digite os elementos do vetor A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // Troca os elementos
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }


    cout << "\nVetor A ordenado em ordem crescente: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
