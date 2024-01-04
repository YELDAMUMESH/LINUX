#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pid,stat;
    pid=fork();
    if(pid==0)
    {
        execl("/bin/ls","ls","-l",0);
        printf("\n CHILD PROCESS IN ACTION \n");
        exit(10);
    }
    else
    {
        sleep(2);
        printf("PARENT IS NOW TERMINATED\n");
        printf("parents pid : %d\n",getpid());
    }
}