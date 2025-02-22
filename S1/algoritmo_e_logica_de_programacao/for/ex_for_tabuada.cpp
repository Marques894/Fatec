// base-project-template "Exercicio - 02/09/24 - verificar se maquina nessecita de manutencao"

#include <iostream>  // Biblioteca para entrada e saída.
#include <locale>    // Biblioteca para suporte a localidade (acentuação).
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada função da biblioteca padrão.

int main(int argc, char** argv) { // Função principal do programa.
	
	 setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para português.
	 
    // Declaração de variáveis
    int tabuada;
    
    // Entrada de dados.
    cout << "Qual tabuada você quer que seja realizada ?\n";
    cin >> tabuada;
    
    // Saída de dados.
    for(int i=1; i<=10; i++){
    	cout << tabuada << " X " << i << " = " << tabuada*i << endl;
	}
    return 0; // Finaliza o programa com sucesso.
}


