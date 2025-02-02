// "Exercicio - 02/09/24 - verificar se maquina nessecita de manutencao"

#include <iostream>  // Biblioteca para entrada e saída
#include <locale>    // Biblioteca para suporte a localidade (acentuação)
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada função da biblioteca padrão

int main(int argc, char** argv) { // Função principal do programa

	setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para português.
	
    // "Declaração de variáveis"
    int codigo_da_maquina;
    double pecas_produzidas, pecas_defeituosas, resultado;    // Armazena números de ponto flutuante de dupla precisão
	string nome_funcionario;       // Armazena um único caractere
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 02/09/24 - Verificar se máquina nessecita de manutenção\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
    // Entrada de dados
    cout << "Olá, qual o seu nome ?\n";
    cin >> nome_funcionario;
    cout << "\n";
    
    cout << "Informe o código da máquina...\n";
    cin >> codigo_da_maquina; 
    
    cout << "Para verificarmos se a maquina pecisa de mautenção precisamos de duas infomações\n\n";
    cout << "Quanta peças foram produzidas ?\n";
    cin >> pecas_produzidas;
    cout << "\n";
    
    cout << "Quanta peças estão defeituosas ?\n?";
    cin >> pecas_defeituosas;
    cout << "\n";
    
    // Saída de dados
    if(pecas_defeituosas < 0.10 * pecas_produzidas){ // Estrutura Simples
    	cout << "A maquina está funcionando perfeitamente.\n";
	}else{
		cout << "A maquina precisa de manutenção.";
	}

    return 0; // Finaliza o programa com sucesso
}
