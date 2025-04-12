import java.util.Scanner;

class Executavel{
    public static void main(String a[]){
        Scanner teclado = new Scanner(System.in);
        System.out.println("Boa Noite Professor!");
        
        System.out.println("Digite seu nome: ");
        String nome = teclado.next();
        
        System.out.println("Digite sua maticula: ");
        int matricula = teclado.nextInt();
        
        System.out.println("Digite seu salario: ");
        float salario = teclado.nextFloat();
        
        System.out.println("Digite seu curso: ");
        String curso = teclado.next();
        
        Professor p1 = new Professor(nome,matricula,salario,curso);
        //p1.setNome(nome);
        //p1.setMatricula(matricula);
        //p1.setSalario(salario);
        //p1.setCurso(curso);
        
        System.out.println("Nome: " + p1.getNome());
        System.out.println("Matricula: " + p1.getMatricula());
        System.out.println("Salario: " + p1.getSalario());
        System.out.println("Curso: " + p1.getCurso());
    }
}