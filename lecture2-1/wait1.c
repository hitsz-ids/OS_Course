#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void fork6() {
    int child_status;

    if (fork() == 0) {
        printf("HC: hello from child\n");
	exit(0);
    } else {
        printf("HP: hello from parent\n");
        wait(&child_status);
        printf("CT: child has terminated\n");
    }
    printf("Bye\n");
}

int main()
{
    fork6();
}

