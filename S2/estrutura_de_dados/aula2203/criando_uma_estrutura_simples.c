#include <stdio.h> 
#include <locale.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main(){

    struct Pessoa pessoa;

    printf("Digite o seu nome: ");
    scanf("%s", &pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite sua altura: ");
    scanf("%f", &pessoa.altura);

    printf("\n");

    printf("Voce possui: %d anos de idade.\n\n", pessoa.idade);
    printf("Nome: %s\n\n", pessoa.nome);
    printf("Altura: %.2f metros\n\n", pessoa.altura);
}