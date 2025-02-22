#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota1, nota2, mediaAluno, mediaGeral = 0;
    int totalAlunos = 10;

    for (int i = 1; i <= totalAlunos; i++){
        cout << "Aluno " << i << ":\n";

        do{ // verifica a primeira nota do aluno
            cout << "Digite a 1º nota: ";
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10)
            {
                cout << "Nota invalida! Digite novamente.\n";
            }
        } while (nota1 < 0 || nota1 > 10);

        do{ // verifica a segunda nota do aluno
            cout << "Digite a 2º nota: ";
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10)
            {
                cout << "Nota invalida! Digite novamente.\n";
            }
        } while (nota2 < 0 || nota2 > 10);

        // faz o caulo da media
        mediaAluno = (nota1 + nota2) / 2;
        mediaGeral += mediaAluno;

        cout << "Média do Aluno " << i << ": " << mediaAluno << endl
             << endl;
    }

    mediaGeral /= totalAlunos;

    cout << "Media geral da turma: " << mediaGeral << endl;

    return 0;
}