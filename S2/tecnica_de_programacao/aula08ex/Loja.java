import java.util.Scanner;

class Loja {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Nome do produto: ");
        String nome_do_produto = scanner.next();
        
        System.out.println("Codigo: ");
        int codigo = scanner.nextInt();
        
        System.out.println("Preço: ");
        int preco = scanner.nextInt();
        
        System.out.println("Quantidade: ");
        int quantidade = scanner.nextInt();
        
        Produto p1 = new Produto(nome_do_produto, codigo, preco, quantidade); 
        
        }
}