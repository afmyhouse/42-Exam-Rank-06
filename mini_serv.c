#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/select.h>

#include <sys/socket.h>
#include <netinet/in.h>

int extract_message(char *buf, char **msg) {
	char *newbuf;
	
}