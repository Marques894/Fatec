#include <iostream> 
#include <locale>
#include <string>

using namespace std;

const double PI = 3.14159;

double raioesfera(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");

   double raio;
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double volume = raioesfera(raio);
    cout << "O volume da esfera é: " << volume << endl;

    return 0;
}
