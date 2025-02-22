#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    cout << "+--------------------------------------------------+\n";
	cout << "Exercicio - Grao de Trigo\n";
	cout << "+--------------------------------------------------+\n\n";

    long long int grao = 1;
    
    cout << "Aqui esta uma sequencia completa\n";
    for (int i=1; i<=64; i++){
        	cout << "Quadrado: " << i;
            cout << " Graos " << grao << endl;
            grao = grao*2;
    	}
    return 0;
}



