 class RoboSimples{
    private String nomeDoRobo;
    private int posicaoXAtual, posicaoYAtual;
    private char direcaoAtual;
     
    RoboSimples(String n, int px, int py, char d){
         nomeDoRobo = n;
         posicaoXAtual = px;
         posicaoYAtual = py;
         direcaoAtual = d;
    }
     
    RoboSimples(String n){
         nomeDoRobo = n;
         posicaoXAtual = 0;
         posicaoYAtual = 0;
         direcaoAtual = 'N';
    }
     
    RoboSimples(){
         nomeDoRobo = "";
         posicaoXAtual = 0;
         posicaoYAtual = 0;
         direcaoAtual = 'N';
    }
     
    public void move(){
         if(direcaoAtual == 'N') posicaoYAtual++;
         if(direcaoAtual == 'S') posicaoYAtual--;
         if(direcaoAtual == 'E') posicaoXAtual++;
         if(direcaoAtual == 'O') posicaoXAtual--;
    }
     
    public void move(int passos){
         if(direcaoAtual == 'N')
             posicaoYAtual = posicaoYAtual + passos;
             
         if(direcaoAtual == 'S')
             posicaoYAtual = posicaoYAtual - passos;
             
         if(direcaoAtual == 'E')
             posicaoXAtual = posicaoXAtual + passos;
        
         if(direcaoAtual == 'O')
             posicaoXAtual = posicaoXAtual - passos;
    }
    
    public void mudaDirecao(char novaDirecao){
        direcaoAtual = novaDirecao;
    }
    
    public String toString(){
        String posicao = "Nome do Robô: "+nomeDoRobo+"\n";
        posicao=posicao+"Posicão do Robô ("+posicaoXAtual+", "+posicaoYAtual+")\n";
        posicao=posicao+"Direcão do Robô: "+direcaoAtual;
        return posicao;
    }
 }