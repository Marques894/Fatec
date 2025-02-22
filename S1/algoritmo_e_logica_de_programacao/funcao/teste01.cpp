#include <iostream> 
#include <locale>
#include <string>

using namespace std;

float calcular(float n1, float n2){
    return (n1 * n2);
}

int main(int argc, char const *argv[]){
    float n1,n2;

    std::cout << "Digite o primeiro numero";
    cin >> n1;

    std::cout << "Digite o segundo numero";
    cin >> n2;

    cout << calcular(n1,n2);
    return 0;
}
