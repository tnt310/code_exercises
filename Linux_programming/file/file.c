#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
int main()
{
    FILE *fd = fopen("hello.txt","a+");
    if (fd == NULL)
        printf("open failed, error: %s\n", strerror(errno)); // errno global variable save error value of system call fail
    else
        fputs("HELLO WORLD, I am IRONMAN\r\n",fd);
        fclose(fd);
}

