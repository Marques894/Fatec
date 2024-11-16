#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(int argc, char** argv){

    setlocale(LC_ALL, "portuguese");

    string matriz[5][2];

    for (int lin = 0; lin <5; lin++){
        cout << "[" << lin+1 << "]" << " informe o Codigo do funcionario: ";
        cin >> matriz[lin][0];
        cout << "informa o Nome do funcionario: ";
        cin >> matriz[lin][1];
        cout << endl; 
    }        
    
        for(int lin=0; lin < 5; lin++){
		cout << "Codigo: " << matriz[lin][0] << endl;
		cout << "Nome: " << matriz[lin][1] << endl;	
		cout << "========================= \n";
	}
    
    return 0;

}
