#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - Fibonacci\n";
	cout << "+---------------------------------------------------------------+\n\n";

    int res, prox_num;
    int t1=0,t2=1;

    cout << "Quantos termos deseja visualizar a serie de Fibonacci ?";
    cin >> res;

    for(int i=0; i<=res; i++){
    	cout << t1 << " ";
    	prox_num = t1 + t2;
    	
    	t1 = t2;
    	t2 = prox_num;
    }
}
