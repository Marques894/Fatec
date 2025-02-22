// "Execicio - 30/09/2024 - 1) Quantidade de ferraduras nessesarias" 

#include <iostream> // Biblioteca para entrada e sa�da.
#include <locale>   // Biblioteca para suporte e localidade (Acentua��o).
#include <string>   // Biblioteca para uso de string.
using namespace std;

int main(){ // Fun��o principal do programa.
	
	setlocale(LC_ALL, "portuguese"); // Define a licalidade do programa em portugu�s.
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Fabrica de Camisetas.\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
	// Declara��o de variaveis
	int p, m, g, qtd_total;
	double valor_arrecadado;
	
	// Entrada de dados
	cout << "Quantas camisas tamanho 'P' foram vendidas ?\n";
	cin >> p;
	cout << "\n\n";
	
	cout << "Quantas camisas tamanho 'M' foram vendidas ?\n";
	cin >> m;
	cout << "\n\n";
	
	cout << "Quantas camisas tamanho 'G' foram vendidas ?\n";
	cin >> g;
	cout << "\n\n";
	
	qtd_total = p + m + g;
	valor_arrecadado = (p*30) + (m*40) + (g*50);
	
	// Saida de dados
	if(valor_arrecadado >=1){
		cout << "A quantidade de camisas vendidas foi: " << qtd_total << endl;
		cout << "O valor arrecadado foi: " << valor_arrecadado;
		
	}else{
		cout << "N�o houve vendas !" << endl;
		cout << "A quantidade de camisas vendidas foi: " << qtd_total << endl;
		cout << "O valor arrecadado foi: " << valor_arrecadado;
	}	
	return 0;  
}	

