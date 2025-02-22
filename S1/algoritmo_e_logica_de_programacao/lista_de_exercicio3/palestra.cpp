#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	string palestras[4][4] = {
		{"1", "Linux", "Auditorio 1", "8h as 9h"},
    	{"2", "Recuperac�o de Desastres", "Auditorio 2", "9h as 10h"},
    	{"3", "windows Server", "Auditorio 3", "13h as 14h"},
    	{"4", "Logica e Programacao", "Auditorio principal", "15h as 17h"}
	};
	
	int codigo;
	
	cout << "Digite o codigo da palestra (1 a 4): " << endl;
	cin >> codigo;

	if(codigo >=1 && codigo <=4){
		int index = codigo - 1;
        cout << "Palestra: " << palestras[index][1] << "\n";
        cout << "local: " << palestras[index][2] << "\n";
        cout << "Horario: " << palestras[index][3] << "\n";
	}else{
		cout << "Codigo invalido. Por favor, digite um numero entre 1 e 4.\n";
	}
	
	return 0;
}
