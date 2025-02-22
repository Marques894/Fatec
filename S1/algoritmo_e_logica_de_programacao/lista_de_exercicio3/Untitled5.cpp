#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int matriz1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    }; 

    int matriz2[4][4] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    int matrizMaior[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMaior[i][j] = matriz1[i][j];
            } else {
                matrizMaior[i][j] = matriz2[i][j];
            }
        }
    }

    cout << "\nMatriz com os maiores elementos:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrizMaior[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
