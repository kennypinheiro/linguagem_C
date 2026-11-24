#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define SERVER_IP "192.168.100.48"
#define SERVER_PORT 8001

int main(void){
    //Client Socket
    int client_fd = socket(AF_INET, SOCK_STREAM, 6);
    
    //Server Address Socket
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);
    socklen_t addrlen = sizeof(server_addr);
    
    //Connect to the server
    connect(client_fd, (struct sockaddr *) &server_addr, addrlen);
    
    char buff[255];

    while(1){
        //Send message
        memset(buff, 0, sizeof(buff));
        printf("Send to server:\n-> ");
        fgets(buff, 255, stdin);
        send(client_fd, buff, sizeof(buff), 0);
        
        //Receive
        memset(buff, 0, sizeof(buff));
        recv(client_fd, buff, sizeof(buff), 0);
        printf("\nReceived from server: %s\n", buff);
                 
    }
    
    close(client_fd);
    return 0;
}
