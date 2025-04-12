import java.util.Scanner;

public class Loja {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Criando um array para armazenar 2 produtos
        Produto[] produtos = new Produto[2];

        for (int i = 0; i < produtos.length; i++) {
            System.out.println("\nCadastro do Produto " + (i + 1));

            System.out.print("Nome do produto: ");
            String nome = scanner.nextLine();

            System.out.print("Código do produto: ");
            int codigo = scanner.nextInt();

            System.out.print("Preço do produto: ");
            double preco = scanner.nextDouble();

            System.out.print("Quantidade: ");
            int quantidade = scanner.nextInt();
            scanner.nextLine(); // Consumir a quebra de linha

            // Criando o objeto Produto e armazenando no array
            produtos[i] = new Produto(nome, codigo, preco, quantidade);
        }

        // Exibindo os produtos cadastrados
        System.out.println("\nProdutos cadastrados:");
        for (Produto produto : produtos) {
            produto.exibirInformacoes();
            System.out.println("----------------------");
        }

        scanner.close();
    }
}
