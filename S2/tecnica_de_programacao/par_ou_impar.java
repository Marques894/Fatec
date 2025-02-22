import java.util.Scanner;

public class par_ou_impar {
    public static void main(String arg[]){
        int num;

        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite algum numero: ");
        num = entrada.nextInt();
                
        if (num /2 == 0) {
            System.out.println("É um numero par!");
        }else{
            System.out.println("È um numero impar!");
        }
        
    }
}

