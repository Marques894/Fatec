#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL, "portuguese");

    int matriz[4][4];

    for (int lin = 0; lin < 4; lin++){ // controla linha 
        for (int col = 0; col < 4; col++){ // controla coluna
            matriz[lin][col] = lin*col;

            cout << matriz[lin][col] << "|"; // cmostra na tela 
        } 
        cout << endl;
    }
}