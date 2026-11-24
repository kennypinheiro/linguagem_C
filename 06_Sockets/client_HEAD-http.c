#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define SERVER_IP "142.251.156.119"
#define PORT 80

int main(void){
    int client_fd;  
    client_fd = socket(AF_INET, SOCK_STREAM, 6);

    struct sockaddr_in server_client;
    server_client.sin_addr.s_addr = inet_addr(SERVER_IP);
    server_client.sin_port = htons(PORT);
    server_client.sin_family = AF_INET;

    connect(client_fd, (struct sockaddr *) &server_client, sizeof(server_client));
    
    char buffer[] = "HEAD / HTTP/1.0\n\n";
    send(client_fd, buffer, sizeof(buffer),0);

    char msgBuffer[1500];
    recv(client_fd, msgBuffer, sizeof(msgBuffer),0);

    close(client_fd);

    printf("%s", msgBuffer);

    return 0;
}
