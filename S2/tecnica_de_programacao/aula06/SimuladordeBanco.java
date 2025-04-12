class SimuladordeBanco{
    
    private int numeroDoCliente;
    private int numeroDoCaixa;
    
    SimuladordeBanco(int n){
        numeroDoCaixa = n;
        numeroDoCliente = 0;
        System.out.println("Caixa"+numeroDoCaixa+"Iniciou operação");
    }
    
    public void proximoAtendimento(){
        numeroDoCliente = numeroDoCliente+1;
        System.out.println("Cliente com senha numero "+numeroDoCliente+" favor");
        System.out.println("Dirigir-se ao caixa número "+numeroDoCaixa);
    }
}
