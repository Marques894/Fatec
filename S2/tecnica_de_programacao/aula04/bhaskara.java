import java.util.Scanner;

class bhaskara{
    public static void main(String arg[]){
        Scanner Scanner = new Scanner(System.in);
        
        System.out.println("Digite o valor de a: ");
        double a = Scanner.nextDouble();
        
        System.out.println("Digite o valor de b: ");
        double b = Scanner.nextDouble();
        
        System.out.println("Digite o valor de c: ");
        double c = Scanner.nextDouble();
        
        double delta = (b*b)-(4*a*c);
        System.out.println(delta);
    }
}