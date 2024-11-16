#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(int argc, char** argv){

    setlocale(LC_ALL, "portuguese");

    int res, prox_num;
    int t1,t2;

    t1 = 0;
    t2 = 1;

    cout << "Quantos termos deseja visualizar a serie de Fibonacci ?";
    cin >> res;

    for(int i = 0; i <=res; i++){
     cout << "/n" << prox_num = t1 + t2;

    t1 = t2;
    t2 = prox_num;

    }
}
