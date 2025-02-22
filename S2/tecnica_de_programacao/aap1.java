public class aap1 {
    public static void main (String arg[]){
        int valor=(int)(Math.random()*5);

        if(valor > 0){
            System.out.println("O valor maior que zero = " + valor);
        }else{
            System.out.println("O valor menor ou igual a zero = " + valor);
        }
    }
}
