#ifndef _EPOLLCLIENT_H
#define _EPOLLCLIENT_H

#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <netinet/in.h>
#include <pthread.h>

//#define PORT		8888
//#define IP			"192.168.254.129"
#define FAILURE		10000
#define TRUE		10001

struct sockaddr_in server_addr;


#endif
