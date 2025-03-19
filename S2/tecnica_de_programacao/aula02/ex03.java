import java.util.Scanner;
import java.util.InputMismatchException;

class ex03{
    public static void main(String arg[]){
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite um numero: ");
        
        try{
            int num = teclado.nextInt();
            if(num >0) System.out.println("Positivo!");
            else System.out.println("Negativo!");
        }catch(InputMismatchException e ){
            System.out.println("Digite um numero");
        }finally{
            System.out.println("Fim");
        }
        
    }
}
