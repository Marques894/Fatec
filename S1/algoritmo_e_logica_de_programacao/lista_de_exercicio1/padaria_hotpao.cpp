// "Exercicio - 30/09/2024 - padaria hotpao"

#include <iostream> // Entradas e saidas de dados
#include <locale>   // 
#include <string>   // 

using namespace std; 

int main(){ // Fun��o principal do programa
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "+--------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Padaria Hotp�o.\n";
	cout << "+------------------------------------------+\n\n";
	
	// Declara��o de variaveis
	int pao, broa;
	double valor_pao, valor_broa, faturamento;
	
	// Entradas de dados
	cout << "Quantos p�es foram vendidos ?\n";
	cin >> pao;
	cout << "\n";
	valor_pao = pao * 0.35;
	
	cout << "Quantas broas foram vendidas ?\n";
	cin >> broa;
	cout << "\n";
	valor_broa = broa * 1.50;
	
	faturamento = valor_pao + valor_broa;
	
	// Saida de dados
	cout << "O valor total faturado no dia foi: " << faturamento << endl;
	cout << "Valor destinado a poupan�a: " << faturamento*0.10;
	
	
	return 0;
	
}
