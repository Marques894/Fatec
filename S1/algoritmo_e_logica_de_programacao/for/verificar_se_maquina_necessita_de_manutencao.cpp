// "Exercicio - 02/09/24 - verificar se maquina nessecita de manutencao"

#include <iostream>  // Biblioteca para entrada e sa�da
#include <locale>    // Biblioteca para suporte a localidade (acentua��o)
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada fun��o da biblioteca padr�o

int main(int argc, char** argv) { // Fun��o principal do programa

	setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para portugu�s.
	
    // "Declara��o de vari�veis"
    int codigo_da_maquina;
    double pecas_produzidas, pecas_defeituosas, resultado;    // Armazena n�meros de ponto flutuante de dupla precis�o
	string nome_funcionario;       // Armazena um �nico caractere
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 02/09/24 - Verificar se m�quina nessecita de manuten��o\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
    // Entrada de dados
    cout << "Ol�, qual o seu nome ?\n";
    cin >> nome_funcionario;
    cout << "\n";
    
    cout << "Informe o c�digo da m�quina...\n";
    cin >> codigo_da_maquina; 
    
    cout << "Para verificarmos se a maquina pecisa de mauten��o precisamos de duas infoma��es\n\n";
    cout << "Quanta pe�as foram produzidas ?\n";
    cin >> pecas_produzidas;
    cout << "\n";
    
    cout << "Quanta pe�as est�o defeituosas ?\n?";
    cin >> pecas_defeituosas;
    cout << "\n";
    
    // Sa�da de dados
    if(pecas_defeituosas < 0.10 * pecas_produzidas){ // Estrutura Simples
    	cout << "A maquina est� funcionando perfeitamente.\n";
	}else{
		cout << "A maquina precisa de manuten��o.";
	}

    return 0; // Finaliza o programa com sucesso
}
