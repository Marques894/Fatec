class Professor extends Funcionario{
    String curso;
    
    //Construtor
    Professor(String n, int m, float s, String c){
        super(n,m,s);
        curso = c;
    }
    
    void setCurso(String c){
        curso = c;
    }
    
    String getCurso(){
        return curso;
    }
    
    public String toSting(){
        String  saida = "Nome: " + nome + "\n";
        saida += "Matricula: " + matricula + "";
    }
}