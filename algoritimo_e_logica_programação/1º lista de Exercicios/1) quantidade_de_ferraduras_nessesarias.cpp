// "Execicio - 30/09/2024 - 1) Quantidade de ferraduras nessesarias" 

#include <iostream> // Biblioteca para entrada e saída.
#include <locale>   // Biblioteca para suporte e localidade (Acentuação).
#include <string>   // Biblioteca para uso de string.

using namespace std;

int main(int argc , char** argv){ // Função principal do programa.
	
	setlocale(LC_ALL, "portuguese"); // Define a licalidade do programa em português.
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Quatidade de ferraduras nessesarias.\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
	// "Declaração de variaveis"
	int cavalos, qtd_ferradura;
	
	// Entrada de dados
	cout << "Quantos cavalos foram comprados para o haras ?\n";
	cin >> cavalos;
	cout << "\n";
	
	qtd_ferradura = cavalos * 4;
	
	// Saída de dados 
	cout << "Você precisa de " << qtd_ferradura << " ferraduras."; 
	
	return 0;  
	 
}
