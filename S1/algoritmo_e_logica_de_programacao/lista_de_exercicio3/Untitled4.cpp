#include <iostream> 
#include <locale>
#include <string>

using namespace std;

int main(){
	
setlocale(LC_ALL, "Portuguese");
const int lin = 10;
const int col = 10;


int matriz[10][10] = {
{ 3, 91, 57, 42, 10, 79, 22, 70,  6, 84},
{ 522, 35,  1, 13, 66, 56, 97,  9, 77, 20},
{37, 72, 99, 69, 58, 50, 21, 40,  4, 88},
{15, 78, 92, 44, 27, 41, 64, 26, 75, 61},
{38, 17, 23, 16, 49, 74, 62, 43,  8, 55},
{32, 63,  7, 34, 67, 76, 18, 29, 51, 46},
{65, 45, 28, 52, 71,  2, 80,  36, 59, 95},
{86, 30, 93, 60,  73, 11, 53, 25,  14,  74},
{29, 47, 48, 68,  54,  33, 31, 98,  24,  76},
{ 4, 85, 98, 82, 100, 39, 36,  12, 22, 41}

};

int maior = matriz[0][0];
int linhaMaior = 0, colunaMaior = 0;

	for (int i = 0; i < lin; i++) {
		for (int j = 0; j < col; j++) {
			if (matriz[i][j] > maior) {
			maior = matriz[i][j];
			linhaMaior = i;
			colunaMaior = j;
			}
		}
	}

cout << "Maior valor: " << maior << endl;
cout << "Localiza��o: linha " << linhaMaior << ", coluna " << colunaMaior << endl;
return 0;
}
