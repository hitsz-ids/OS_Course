#include <unistd.h>
#include <stddef.h>

int main()
{
    char *argv[] = {"/bin/ls", "-al", "/usr/lib", NULL};
    char *envp[] = {0, NULL};
    execve("/bin/ls", argv, envp);
}

