#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

struct Carro{
    string marcar;
    string modelo;
    int ano;
    float preco;
};

int main(){

    struct Carro c;

    cout << "Digite a marca do carro: ";
    cin >> c.marcar;
    cout << "\n";

    cout << "Digite a modelo do carro: ";
    cin >> c.modelo;
    cout << "\n";

    cout << "Digite o ano do carro: ";
    cin >> c.ano;
    cout << "\n";

    cout << "Digite o preco do carro: ";
    cin >> c.preco;
    cout << "\n";

    cout << "Marca do Carro: ";
    cout << c.marcar;
    cout << "\n";

    cout << "Modelo do carro: ";
    cout << c.modelo;
    cout << "\n";

    cout << "Ano do carro: ";
    cout << c.ano;
    cout << "\n";

    cout << "Preco do carro: ";

    cout << fixed << setprecision(2) << c.preco;
    cout << "\n";
    

    return 0;
}