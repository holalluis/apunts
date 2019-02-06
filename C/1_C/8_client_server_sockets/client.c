#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 

/* 
 SERVER						CLIENT
 ================================= 
 socket()
 bind()
 listen()
 accept()					socket(); (bind(), //opcional, és per triar explícitament el port, si no fem el bind busca un port tcp lliure )
 | <-------------------- connect()
 v 
 read()						write()
 processar_peticio		
 write()					read()
 */

void 
error(const char *msg){
	perror(msg);	
	exit(0);
}

int 
main(int argc, char *argv[]){
	
	if (argc < 3) { fprintf(stderr,"Ús: %s [hostname] [port] \n", argv[0]); exit(0); }
	
	int port = atoi(argv[2]);
	
	
	// Socket() L'argument SOCK_STREAM vol dir que accedim a TCP, SOCK_DATAGRAM seria UDP
	// 3 coses: ip de la maquina, protocol de transport, port
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);	
	if (sockfd < 0)
		error("ERROR obrint el Socket");

	char buffer[256];	// Aqui s'escriurà el missatge
	
	struct sockaddr_in serv_addr;
    struct hostent* server;
	
	server = gethostbyname(argv[1]);
    
	if (server == NULL)
		error("ERROR, no trobo el host\n");
    
	bzero( (char *)&serv_addr, sizeof(serv_addr) );		// Esborra serv_addr
	
    serv_addr.sin_family = AF_INET;
    
//	bcopy(1,2,3)
	bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);  // ni idea de què fa aquesta línia
	
    serv_addr.sin_port = htons(port);
		
	// Connect(): connecta el socket local amb el socket remot. Assigna l'adreça ip i el port implicitament
	// Connect (socket,adreça,tamany)
    if (connect(sockfd,(struct sockaddr*) &serv_addr,sizeof(serv_addr)) < 0)
		error("ERROR connecting");
	
	
	while (true){
		printf("Escriu el missatge: ");
		bzero(buffer,256);
		fgets(buffer,255,stdin);

		if ( write(sockfd,buffer,strlen(buffer)) < 0)
			error("ha fallat la connexió al socket");
	
		bzero(buffer,256);
		
		//Llegeix la resposta
		if ( read(sockfd,buffer,255) < 0) 
			error("Connexió tancada");

		printf("\033[A");
		printf("								%s\n",buffer);
	}
	
	close(sockfd);
    return 0;
}
