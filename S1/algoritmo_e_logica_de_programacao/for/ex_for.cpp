// base-project-template "Exercicio - 02/09/24 - verificar se maquina nessecita de manutencao"

#include <iostream>  // Biblioteca para entrada e sa�da.
#include <locale>    // Biblioteca para suporte a localidade (acentua��o).
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada fun��o da biblioteca padr�o.

int main(int argc, char** argv) { // Fun��o principal do programa.
	
	 setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para portugu�s.
	 
    // Declara��o de vari�veis
    int inicio, fim;              // Armazena n�meros inteiros.
    string nome;
	
    // Entrada de dados.
    cout << "Qual o seu nome ?\n";
    getline(cin, nome);
    
    cout << "Inicio do intervalo: \n";
    cin >> inicio;
    
    cout << "fim do intervalo: \n";
    cin >> fim;
    
    // Sa�da de dados.
    if(fim<inicio){
    	for(int i=inicio; i<=fim; i++){
			cout << i << " " << nome << endl;
		}	
	}else{
		for(int i=inicio; i>=fim; i--){
		cout << i << " " << nome << endl;
		}
	}
    
    
    
    
    
	
		
    return 0; // Finaliza o programa com sucesso.
}


