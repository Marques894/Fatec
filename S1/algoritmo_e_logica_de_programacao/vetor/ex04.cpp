#include <iostream>
#include <locale> // Biblioteca para suporte a localidade (acentuação).
#include <string>    // Biblioteca para uso de strings

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para português.

    int vetorA[6] = {10,20,30,40,50,60};
    int vetorB[6] = {1,2,3,4,5,6};
    int vetorC[6];

    for (int i=0; i<=5; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    for (int i=0; i<=5; i++){
        cout << vetorC[i] << endl;
    }
    

    return 0;
}