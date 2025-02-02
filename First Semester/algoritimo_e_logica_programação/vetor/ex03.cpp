#include <iostream>
#include <locale> // Biblioteca para suporte a localidade (acentuação).
#include <string>    // Biblioteca para uso de strings

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para português.

    int vetor[8] = {6,3,35,76,54,43,1,23};
    int pesq, posicao;
    bool achei = false;

    cout << "Qual numero deseja encontrar ?";
    cin >> pesq;

    for (int i = 0; i < 8; i++){ // Estrutura de repetição
        if (pesq == vetor[i]){ // Se o numero dados pelo usuario for igual ao numero encontrado no vetor...
            achei = true; // variavel "achei é verdaedeira "
            posicao = i; // 
            break; // para a estrutura de repetição e pula para a proxima parte.
        }
    }
    
    if (achei){
        cout << "Numero encontrado na posicao: " << posicao;
    }else{
        cout << "Numero nao encontrado!";
    }

    return 0; 
    
}