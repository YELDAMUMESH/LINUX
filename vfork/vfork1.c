#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main() 
{
    pid_t  pid;
    printf("current process pid = %d\n",getpid());
    pid=vfork();
    //parent suspended
    if(pid)
    {
        printf("parent process pid : %d\n",getpid());
    }
    else
    {
        sleep(5);
        printf("child process pid : %d\n", getpid());
        //parent suspended by block operation
        exit(0);
        return 0;
    }
}