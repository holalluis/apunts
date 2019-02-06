#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

/* 
 
 SERVER						CLIENT
 ================================= 
 socket()
 bind()
 listen()
 accept()					socket(); (bind(), //opcional, si no fem el bind busca un port tcp lliure )
    | <-------------------- connect()
    v 
 read()						write()
 processar_peticio		
 write()					read()
 
*/

void 
error(const char *msg){
    perror(msg);
    exit(1);
}

int 
main(int argc, char *argv[])
{
    if (argc < 1) {
		fprintf(stderr,"Us: %s [port] \n",argv[0]);
		exit(1);
	} 
	
	int sockfd, newsockfd, port;
	socklen_t clilen;
	char buffer[256];
     
	struct sockaddr_in serv_addr, cli_addr;
     
	//SOCKET
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0) 
        error("ERROR obrint socket");
    
	bzero((char *) &serv_addr, sizeof(serv_addr));
	port = atoi(argv[1]);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);
	
	//BIND
	if (bind(sockfd, (struct sockaddr *) &serv_addr,
              sizeof(serv_addr)) < 0) 
              error("ERROR fent binding");
    //LISTEN
	listen(sockfd,5);
    
	clilen = sizeof(cli_addr);
	
	//ACCEPT (parella del connect)
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);

	if (newsockfd < 0) 
          error("ERROR en acceptar");

	while (true){
	
		bzero(buffer,256);
		
		if (read(newsockfd,buffer,255) < 0) 
			error("ERROR llegint del socket");
		
		printf("Missatge: %s",buffer);
	
		if ( write(newsockfd,"Missatge rebut",18) < 0) 
			error("ERROR escribint al socket");
	
	}
	
	close(newsockfd);
	close(sockfd);
	
	return 0; 
}
