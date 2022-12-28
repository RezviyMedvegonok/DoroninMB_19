
#include <unistd.h>

#include <stdio.h>
int main()
{
    printf("I'm process of main program %d and I'm about to exec an dir\n", getpid());
    execl("/bin/dir", "dir", NULL);
    printf("this is line should be never executed\n");
    return 0;
}



