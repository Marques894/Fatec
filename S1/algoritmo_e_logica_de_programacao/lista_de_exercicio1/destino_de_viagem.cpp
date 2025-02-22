// "Execicio - 30/09/2024 - 5) destino de viagem " 

#include <iostream> // Biblioteca para entrada e sa�da.
#include <locale>   // Biblioteca para suporte e localidade (Acentua��o).
#include <string>   // Biblioteca para uso de string.

using namespace std;

int main(){ // Fun��o principal do programa.
	
	setlocale(LC_ALL, "portuguese"); // Define a licalidade do programa em portugu�s.
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Destino de viagem\n";
	cout << "+---------------------------------------------------------------+\n\n";
	
	// Declara��o de variaveis
	int destino, passagem;
	
	
	// Entrada de dados
		do{
			system("cls"); // Limpar  
		cout << "Qual a região do seu destino de viagem ? (Responda com a numeração correspondente!)\n";
		cout << "1) Região Norte\n";
		cout << "2) Região Nordeste\n";
		cout << "3) Região Centro-Oeste\n";
		cout << "4) Região Sul\n";
		cin >>destino;	
		cout << '\n';	
		}while(destino < 1 || destino > 4);
		
		do{
		cout << "Passagem\n";
		cout << "1) Ida\n";
		cout << "2) Ida e Volta\n";
		cin >> passagem;
		cout << '\n';			
		}while(passagem < 1 || passagem  > 2);

	
		
	
		// Saida de dados
	
		if(passagem == 1){
			switch(destino) {
				case 1: {
					cout << "Região Norte, somente ida, no valor de 500,00.\n";
				} break;
				
				case 2:
				cout << "Região Nordeste, somente ida, no valor de 350,00.\n";
				break;
				
				case 3:
				cout << "Região Centro-Oeste, somente ida, no valor de 350,00.\n";
				break;
				
				case 4:
				cout << "Região Sul, somente ida, no valor de 300,00.\n";
				break;
			}
		} else if (passagem == 2) {
			
		switch(destino) {
			case 1: {
				cout << "Região Norte, ida e volta, no valor de R$900,00.\n";
			} break;
			
			case 2: {
				cout << "Região Nordeste, ida e volta, no valor de R$650,00.\n";
			} break;
			
			case 3: {
				cout << "Região Centro-Oeste, ida e volta, no valor de 600,00.\n";
			} break;
			
			case 4: {
				cout << "Região Sul, ida e volta, no valor de 550,00.\n";
				} break;
		}
	}else{
		cout << "Algo deu errado, tente novamente! \n\n";
	}
	
	
	return 0;  
}	

