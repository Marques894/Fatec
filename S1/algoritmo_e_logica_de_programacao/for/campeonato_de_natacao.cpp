// "Exercicio - 16/09/24 - campeonato de natacao"

#include <iostream>  // Biblioteca para entrada e sa�da.
#include <locale>    // Biblioteca para suporte a localidade (acentua��o).
#include <string>    // Biblioteca para uso de strings

using namespace std; // Evita o uso de "std::" antes de cada fun��o da biblioteca padr�o.

int main(int argc, char** argv) { // Fun��o principal do programa.
	
	 setlocale(LC_ALL, "portuguese"); // Define a localidade do programa para portugu�s.
	 
    // "Declara��o de vari�veis"
    int ano_atual, ano_nascimento, estilo_de_natacao, idade;     // Armazena n�meros inteiros.
    string nome_atleta;    // Declara uma vari�vel do tipo string para armazenar texto.
    
    cout << "+-----------------------------------------------------------------+\n";
	cout << "Exercicio - 16/09/24 - Campeonato de nata��o\n";
	cout << "+-----------------------------------------------------------------+\n\n";
	
    // Entrada de dados.
    cout << "Nome do atleta:\n";
    getline(cin, nome_atleta);
    cout << "\n";
    
    cout << "Ano atual:\n";
    cin >> ano_atual;
    cout << "\n";
    
    cout << "Ano de nascimento:\n";
    cin >> ano_nascimento;
    cout << "\n";
    
    cout << "Estilo de nata��o. (Resposta Numerica)\n\n";
    cout << "1) Nado Livre\n";
    cout << "2) Nado de Costas\n";
    cout << "3) Nado Borboleta\n";
    cin >> estilo_de_natacao;
    cout << "\n";
    
    idade = (ano_atual - ano_nascimento);
    
    // Sa�da de dados.
    if(estilo_de_natacao == 1){
    	if(idade <= 16){
    		cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
    		cout << "Piscina 01";
		}else{
			cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
			cout << "Piscina 05";
		}
		
	}else if(estilo_de_natacao == 2){
		if(idade <=21){
			cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
    		cout << "Piscina 02";
		}else{
			cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
			cout << "Piscina 03";
		}
		
	}else if(estilo_de_natacao == 3){
		if(idade <12){
			cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
    		cout << "Piscina 04";
		}else{
			cout << "Nome: " << nome_atleta << "\n" << "Idade: " << idade;
			cout << "Piscina 06";
		}
		
	}else{
		cout << "Essa op��o n�o � valida, escolha outra!";
	}
    

    return 0; // Finaliza o programa com sucesso.
}
