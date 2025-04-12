
#include <locale>
#include <iostream>
#include <string>

using namespace std;

struct computer{
    string marca;
    string modelo;
    float preco;
};

int main(){
 
    // Declaração das variaveis que tem do struct
    struct computer c = {};

    
    computer* ptr = &c;

    ptr->marca = "DELL";
    ptr->modelo = "Samsung";
    ptr->preco = 300.000;

    cout << "marca: " <<  c.marca <<endl;
    cout << "modelo: " <<  c.modelo <<endl;   
    cout << "preço: " <<  c.preco <<endl;

    
}