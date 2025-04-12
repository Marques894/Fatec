#include <iostream>
#include <cstring>

using namespace std;

struct Computador {
    char marca[30];
    char modelo[30];
    float preco;    
};

int main() {
    Computador c;
    Computador *ptr = &c;
    
    strcpy(ptr->marca, "Acer");
    strcpy(ptr->modelo, "Nitro V15");
    ptr->preco = 3800.00;
    
    cout << "Marca: " << ptr->marca << endl;
    cout << "Modelo: " << ptr->modelo << endl;
    cout << "Preco: R$ " << ptr->preco << endl;
    
    return 0;
} 
