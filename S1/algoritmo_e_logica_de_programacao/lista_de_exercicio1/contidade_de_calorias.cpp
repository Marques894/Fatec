// "Execicio - 30/09/2024 - 4) quantidade de calorias  " 

#include <iostream> // Biblioteca para entrada e sa�da.
#include <locale>   // Biblioteca para suporte e localidade (Acentua��o).
#include <string>   // Biblioteca para uso de string.
using namespace std;

int main(){ // Fun��o principal do programa.
	
	setlocale(LC_ALL, "portuguese"); // Define a licalidade do programa em portugu�s.
	
	cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 30/09/24 - Quantidade de calorias\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
	// Declara��o de variaveis
	int prato, sobremesa, bebida, cal_prato, cal_sobremesa, cal_bebida, cal_total;
	
	// Entrada de dados
	cout << "Qual prato deseja ? (Escolha o n�mero)\n\n";
	cout << "1) Vegetariano 180cal\n";
	cout << "2) Peixe       230cal\n";
	cout << "3) Frango      250cal\n";
	cout << "4) Carne       350cal\n";
	cin >> prato;
	cout << "\n\n";
	
	cout << "Qual sobremesa deseja ? (Escolha o n�mero)\n\n";
	cout << "1) Abacaxi          75cal\n";
	cout << "2) Sorvete Diet     110cal\n";
	cout << "3) Mousse Diet      170cal\n";
	cout << "4) Mousse chocolate 200cal\n";
	cin >> sobremesa;
	cout << "\n\n";
	
	cout << "Qual bebida deseja ? (Escolha o n�mero)\n\n";
	cout << "1) Ch�               20cal\n";
	cout << "2) Suco de Laranj�   70cal\n";
	cout << "3) Suco de Mel�o     100cal\n";
	cout << "4) Refrigerante Diet 65cal\n";
	cin >> bebida;
	cout << "\n\n";
	
	// Saida de dados
	switch(prato){
		case 1:
		cout << "Vegetariano " << (cal_prato = 180) << "cal" << endl;
			break; 
			
		case 2:
		cout << "Peixe " << (cal_prato = 230)  << "cal" << endl;
			break;
			
		case 3:
		cout << "Frango " << (cal_prato = 250)  << "cal" << endl;
			break; 
			
		case 4:
		cout << "Carne " << (cal_prato = 350)  << "cal" << endl;
			break; 		 	
	}
	
	switch(sobremesa){
		case 1:
		cout << "Abacaxi " << (cal_sobremesa = 75) << "cal" << endl;
			break; 
			
		case 2:
		cout << "Sorvete Diet " << (cal_sobremesa = 110) << "cal" << endl;
			break;
		
		case 3:
		cout << "Mousse " << (cal_sobremesa = 170) << "cal" << endl;
			break;
			
		case 4:
		cout << "Mousse chocolate " << (cal_sobremesa = 200) << "cal" << endl;
			break;		 		 	
	}
	
	switch(bebida){
		case 1:
		cout << "Ch� " << (cal_bebida = 20) << "cal" << endl;
			break; 
			
		case 2:
		cout << "Suco de Laranja " << (cal_bebida = 70) << "cal" << endl;
			break;
			
		case 3:
		cout << "Suco de Mel�o " << (cal_bebida = 100) << "cal" << endl;
			break; 
			
		case 4:
		cout << "Refrigerante " << (cal_bebida = 65) << "cal" << endl;
			break; 		 	
	}
	
	cal_total = (cal_prato + cal_sobremesa + cal_bebida);
	
	cout << "\n";
	cout << "Calorias totais nessa refei��o " << cal_total << "cal";
	return 0;  
}	

