#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("current process pid = %d\n",getpid());
    int pid_1=fork();
    if(pid_1==0) {
        printf("new child process pid =%d\n",getpid());
        printf("child parent process ppid =%d\n",getppid());
    }
    else{
        printf("parent process pid =%d\n",getpid());
        printf("parent's parent process ppid =%d\n",getppid());

    }
    while(1);
    return 0;

}