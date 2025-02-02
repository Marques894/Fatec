#include <iostream>
#include <locale>
#include <string>

using namespace std;


float soma(float n1, float n2)
{
    return (n1 + n2);
}

float subtracao(float n1, float n2)
{
    return (n1 - n2);
}

float multiplicao(float n1, float n2)
{
    return (n1 * n2);
}

float divisao(float n1, float n2)
{
    return (n1 / n2);
}

int main(int argc, char const *argv[])
{
    int op;
    float n1, n2;

    do
    {
        cout << endl;
        cout << endl;
        cout << "|=================|" << endl;
        cout << "| 1-Soma          |" << endl;
        cout << "| 2-Subtracao     |" << endl;
        cout << "| 3-Multiplicacao |" << endl;
        cout << "| 4-Divisao       |" << endl;
        cout << "| 5-Sair          |" << endl;
        cout << "|=================|" << endl;

        cout << "Escolha um dos tipos de conta: ";
        cin >> op;
        cout << endl;

        switch (op)
        {
        case 1:
            std::cout << "Digite o primeiro numero ";
            cin >> n1;

            std::cout << "Digite o segundo numero ";
            cin >> n2;

            cout << soma(n1, n2);
            break;
        case 2:
            std::cout << "Digite o primeiro numero ";
            cin >> n1;

            std::cout << "Digite o segundo numero ";
            cin >> n2;
            cout << subtracao(n1, n2);
            break;
        case 3:
            std::cout << "Digite o primeiro numero ";
            cin >> n1;

            std::cout << "Digite o segundo numero ";
            cin >> n2;
            cout << multiplicao(n1, n2);
            break;
        case 4:
            std::cout << "Digite o primeiro numero ";
            cin >> n1;

            std::cout << "Digite o segundo numero ";
            cin >> n2;
            cout << divisao(n1, n2);
            break;

        default:
            break;
        }

    } while (op != 5);

    return 0;
}
