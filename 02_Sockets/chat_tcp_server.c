#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#define SERVER_PORT 8001
#define SERVER_IP "192.168.100.48"

int main(void){
    //Create Server Socket
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    
    //Add Ip and Port to the server struct
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    socklen_t addrlen = sizeof(server_addr);

    //Bind server socket to the struct_address
    bind(server_fd, (struct sockaddr *) &server_addr, sizeof(server_addr));

    //Listen for connections
    listen(server_fd, 5);
    printf("Server is listening on port %d...\n", SERVER_PORT);
    
    //Accept Connection
    int client_fd;
    client_fd = accept(server_fd, (struct sockaddr *) &server_addr, &addrlen);
    
    /*it doesn't work(it is necessary to store the return of the function inside an int variable) 
     * -> accept(server_fd, (struct sockaddr *)&server_addr, &addrlen);*/

    char buff[255];

    while(1){
        //receive msg from Client
	memset(buff, 0, sizeof(buff));
        recv(client_fd, buff, sizeof(buff), 0);
        printf("\nClient says: %s\n", buff);

        //send msg to client:
	memset(buff, 0, sizeof(buff));
        printf("Send to client:\n-> ");
	fgets(buff, 255, stdin);
        send(client_fd, buff, sizeof(buff), 0);
    
    }
    
    close(client_fd);
    close(server_fd);
    return 0;
}
