#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pid,stat;
    pid=fork();
    if(pid==0)
    {
        printf("child process in action \n");
        exit(10);

    }
    else
    {
        pid=wait(&stat);
        printf("%d\n",WEXITSTATUS(stat));
        printf("parent is now terminated\n");
    }
}