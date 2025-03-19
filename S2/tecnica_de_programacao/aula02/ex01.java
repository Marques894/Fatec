/* Faca um programa que mostre a tabuada de um numero */
import java.util.Scanner;

class ex01{
    public static void main(String a[]){
        System.out.println("Digite um numero: "); 
        Scanner teclado = new Scanner(System.in);
        
        int n = teclado.nextInt();
        System.out.println("A tabuada do numero " + n + " e:");
        
        for(int i=0; i<=10; i++){
            System.out.println(i + " x " + n + " = " + i*n);
        }
    }
}