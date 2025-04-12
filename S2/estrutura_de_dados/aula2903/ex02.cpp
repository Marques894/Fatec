
#include <locale>
#include <iostream>
#include <string>

using namespace std;

struct carro{
    string marca;
    int ano;
};

int alterarAno(carro *c, int novoAno){
    return c->ano = novoAno;
}




int main(){
    carro maverick = {"Ford", 1962};
    
    carro* ptr = &maverick;

    alterarAno(ptr, 2012);

    cout << "Carro marca: " << maverick.marca << " Ano: " << maverick.ano << endl;
}