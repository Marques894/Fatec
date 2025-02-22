#include <iostream> 
#include <locale>
#include <string>

using namespace std;

void mensagem(string nome){
    cout << "ola " << nome << ", seja bem vinda!!!\n";
}


// Inicio das Funções de Operadores Aritm�ticos  

float soma(float a, float b){
	float r = a+b;
	return r;
}

float subtracao(float a, float b){
	float r = a-b;
	return r;
}

float multiplicacao(float a, float b){
	float r = a*b;
	return r;
}

float divisao(float a, float b){
	float r = 0;
	if (b > 0){
		r = a/b;
	}else{
		cout << "Valor invalido , n�o � possivel dividir por 0!";
	}
	return r;
}

// Fim das Fun�oes de Operadores Aritm�ticos  


// Inicio Fun��o menu 
int menu(){
    int op;
        cout << "|=================|" << endl;
        cout << "| 1-Soma          |" << endl;
        cout << "| 2-Subtracao     |" << endl;
        cout << "| 3-Multiplicacao |" << endl;
        cout << "| 4-Divisao       |" << endl;
        cout << "| 5-Ordenar Vetor |" << endl;
        cout << "|=================|" << endl;
        cout << "Escolha uma op��o: " << endl;
        cin >> op;

        return op;
}
// Final - Funcao menu 


// Inicio - Ordenando um vetor!
void ordenaVetor(int vetA[], int tam ){
	int aux;
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam-1; j++){
			if (vetA[j] > vetA[j+1]){

				//Algoritimo de troca
				aux = vetA[j];
				vetA[j] = vetA[j+1];
				vetA[j+1] = aux;
			}
		}	
	}
	for (int i=0; i < tam; i++){
			cout << vetA[i] << "|";
	}
}

// Fim - Ordenando um vetor!

int main(int argc, char** argv){

    setlocale(LC_ALL, "portuguese");

    int op=0, vetor[10] = {1,22,53,4,75,66,700,81,98,20};
    float n1=1, n2=0;
	
	
    mensagem("Marques");


	op = menu();

    if(op > 0 && op < 5){
        cout << "Informe o primeiro numero: \n";
        cin >> n1;

        cout << "Informe o segundo numero: \n";
        cin >> n2;
}
        
    switch(op){
    	case 1:
    		cout << "Resultado da Soma: " << soma(n1,n2);
    		break;
    	case 2:
    		cout << "Resultado da Subtracao: " << subtracao(n1,n2);
    		break;
    	case 3:
    		cout << "Resultado da Multiplica��o: " << multiplicacao(n1,n2);
    		break;
    	case 4:
    		cout << "Resultado da Divis�o: " << divisao(n1,n2);
    		break;
    	case 5:
    		ordenaVetor(vetor, 10);
    		break;
    	default:
    		cout << "Op�oes invalidas";
    		break;
}
}
