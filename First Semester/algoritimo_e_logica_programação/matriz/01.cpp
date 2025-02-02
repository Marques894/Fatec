#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(int argc, char** argv){

setlocale(LC_ALL, "portuguese");

    int matriz [4][4];

    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [0][2] = 3;
    matriz [0][3] = 4;

    matriz [1][0] = 5;
    matriz [1][1] = 6;
    matriz [1][2] = 7;
    matriz [1][3] = 8;

    matriz [2][0] = 9;
    matriz [2][1] = 10;
    matriz [2][2] = 11;
    matriz [2][3] = 12;

    matriz [3][0] = 13;
    matriz [3][1] = 14;
    matriz [3][2] = 15;
    matriz [3][3] = 16;

    cout << matriz [0][0] << "|";
    cout << matriz [0][1] << "|";
    cout << matriz [0][2] << "|";
    cout << matriz [0][3] << "|" << endl;

    cout << matriz [1][0] << "|";
    cout << matriz [1][1] << "|";
    cout << matriz [1][2] << "|";
    cout << matriz [1][3] << "|" << endl;
    
    cout << matriz [2][0] << "|";
    cout << matriz [2][1] << "|";
    cout << matriz [2][2] << "|";
    cout << matriz [2][3] << "|" << endl;

    cout << matriz [3][0] << "|";
    cout << matriz [3][1] << "|";
    cout << matriz [3][2] << "|";
    cout << matriz [3][3] << "|" << endl;


}