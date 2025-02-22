#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    for (int i = 0; i < 200; i++){

        if(i % 4 == 0){ //Se i for divisivel por quatro e esse valor der 0
            cout << i << "|";
        }
    }
}
