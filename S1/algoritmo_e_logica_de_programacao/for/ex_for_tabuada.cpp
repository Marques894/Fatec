// base-project-template "Exercicio - 02/09/24 - verificar se maquina nessecita de manutencao"

#include <iostream>  // Biblioteca para entrada e sa�da.
#include <locale>    // Biblioteca para suporte a localidade (acentua��o).
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada fun��o da biblioteca padr�o.

int main(int argc, char** argv) { // Fun��o principal do programa.
	
	 setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para portugu�s.
	 
    // Declara��o de vari�veis
    int tabuada;
    
    // Entrada de dados.
    cout << "Qual tabuada voc� quer que seja realizada ?\n";
    cin >> tabuada;
    
    // Sa�da de dados.
    for(int i=1; i<=10; i++){
    	cout << tabuada << " X " << i << " = " << tabuada*i << endl;
	}
    return 0; // Finaliza o programa com sucesso.
}


