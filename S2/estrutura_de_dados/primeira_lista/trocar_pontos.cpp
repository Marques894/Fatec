#include <iostream>

using namespace std;

struct Ponto {
    int x;
    int y;
};

void trocarPontos(Ponto* a, Ponto* b) {
    int tempX = a->x;
    int tempY = a->y;
    a->x = b->x;
    a->y = b->y;
    b->x = tempX;
    b->y = tempY;
}

int main() {
    Ponto ponto1 = {3, 4};
    Ponto ponto2 = {7, 8};
    
    cout << "Antes da troca:" << endl;
    cout << "Ponto 1: (" << ponto1.x << ", " << ponto1.y << ")" << endl;
    cout << "Ponto 2: (" << ponto2.x << ", " << ponto2.y << ")" << endl;

    trocarPontos(&ponto1, &ponto2);
    
    cout << "Depois da troca:" << endl;
    cout << "Ponto 1: (" << ponto1.x << ", " << ponto1.y << ")" << endl;
    cout << "Ponto 2: (" << ponto2.x << ", " << ponto2.y << ")" << endl;

    return 0;
}

