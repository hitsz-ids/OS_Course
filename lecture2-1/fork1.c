#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main()
{
    pid_t pid;
    int x = 1;

    if ((pid = fork())<0)
	fprintf(stderr,"%s: %s\n", "fork Error!", strerror(errno));
    
    if (pid == 0) {  /* Child */
       printf("child : x=%d\n", ++x); 
       exit(0);
    }

    /* Parent */
    printf("parent: x=%d\n", --x); 
    exit(0);
}
