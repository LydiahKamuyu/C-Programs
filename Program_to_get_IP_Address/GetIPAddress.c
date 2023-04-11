#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    char buffer[256];

    // create a socket
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        perror("socket");
        exit(1);
    }

    // set up a socket address structure
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8888); // arbitrary port number
    addr.sin_addr.s_addr = INADDR_ANY;

    // bind the socket to the address
    if (bind(sock, (struct sockaddr *) &addr, sizeof(addr)) < 0) {
        perror("bind");
        exit(1);
    }

    // get the IP address of the local machine
    struct sockaddr_in local_addr;
    socklen_t addr_len = sizeof(local_addr);
    if (getsockname(sock, (struct sockaddr *) &local_addr, &addr_len) < 0) {
        perror("getsockname");
        exit(1);
    }

    // convert the IP address to a string and print it
    const char *ip_addr = inet_ntop(AF_INET, &local_addr.sin_addr, buffer, sizeof(buffer));
    if (ip_addr == NULL) {
        perror("inet_ntop");
        exit(1);
    }
    printf("IP address: %s\n", ip_addr);

    return 0;
}
