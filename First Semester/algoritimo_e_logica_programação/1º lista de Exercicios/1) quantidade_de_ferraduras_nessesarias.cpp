// "Execicio - 30/09/2024 - 1) Quantidade de ferraduras nessesarias" 

#include <iostream> // Biblioteca para entrada e sa�da.
#include <locale>   // Biblioteca para suporte e localidade (Acentua��o).
#include <string>   // Biblioteca para uso de string.

using namespace std;

int main(int argc , char** argv){ // Fun��o principal do programa.
	
	setlocale(LC_ALL, "portuguese"); // Define a licalidade do programa em portugu�s.
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Quatidade de ferraduras nessesarias.\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
	// "Declara��o de variaveis"
	int cavalos, qtd_ferradura;
	
	// Entrada de dados
	cout << "Quantos cavalos foram comprados para o haras ?\n";
	cin >> cavalos;
	cout << "\n";
	
	qtd_ferradura = cavalos * 4;
	
	// Sa�da de dados 
	cout << "Voc� precisa de " << qtd_ferradura << " ferraduras."; 
	
	return 0;  
	 
}
