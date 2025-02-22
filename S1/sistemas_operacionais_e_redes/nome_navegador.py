import socket
# Exercicio
HOST = 'localhost'
PORT = 80

servidor = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
print('Ouvindo em ',PORT)
servidor.bind((HOST,PORT)) #OCUPA LOCAL
servidor.listen()
conn, addr = servidor.accept()
with conn:
    print('Recebi uma conexão addr: ',addr)
    data = conn.recv(1024)
    print('Recebi: ',data)
    resposta = 'HTTP/1.1 200 OK\n'
    split()
    print ('O navegador que esta sendo utilizado é: ', )
servidor.close()
    
