/* Escreva um pequeno programaque subtraia a sua idade do ano atual e mostre o ano que voce nasceu */

public class ex04 {
    public static void main(String[] args) {
        int anoAtual = 2025;
        int idade = 23;
        int anoNascimento = anoAtual - idade;
        System.out.println("Você nasceu em: " + anoNascimento);
    }
}