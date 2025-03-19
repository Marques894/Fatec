/* Faça um programa que retorne se o numero em variavel e par ou impar usando a estrutura IF */

class ex02{
    public static void main(String arg[]){
        int numero = 2;
        
        if(numero % 2 == 0){
            System.out.println(numero + " Par!");
        }else{
            System.out.println(numero + " Impar!");
        }
    }
}