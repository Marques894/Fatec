#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");
    
    const int codigos[] = {100, 101, 102, 103, 104, 105};
    const float precos[] = {1.20, 1.30, 1.50, 1.20, 1.30, 1.00};
    const string itens[] = {"Cachorro Quente", "Bauru Simples", "Bauru com Ovo", 
                            "Hamb�rguer", "Cheeseburguer", "Refrigerante"};
	
    int codigo, quantidade;
    float total = 0.0;
    
	cout << "||Card�pio:       ||Codigo: ||Pre�o:  ||" << endl;
    cout << "||Cachorro Quente ||100     ||1.20    ||" << endl;
    cout << "||Bauru Simples   ||101     ||1.30    ||" << endl;
    cout << "||Bauru com Ovo   ||102     ||1.50    ||" << endl;
    cout << "||Hamb�rguer      ||103     ||1.20    ||" << endl;
    cout << "||Cheeseburgues   ||104     ||1.30    ||" << endl;
    cout << "||Refrigerante    ||105     ||1.00    ||\n" << endl;
    
    cout << "Dogite o c�digo do item desejado: " << endl;
    cin >> codigo;
	
    cout << "Digite a quantidade desejada: ";
    cin >> quantidade;
    
    for(int i=0; i<6; i++){
    	
		if(codigo == codigos[i]){
			total = precos[i] * quantidade;
			cout << "Item: " << itens[i] << endl;
            cout << "Pre�o unit�rio: R$ " << precos[i] << endl;
            cout << "Quantidade: " << quantidade << endl;
            cout << "Total a pagar: R$ " << total << endl;
            break;
		}

	}
	
	return 0;
}
