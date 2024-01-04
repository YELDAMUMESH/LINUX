#include<stdio.h>
int main()
{
    int id;
    int cnt=0;
    printf("i am going to create a new process\n");
    id=fork();
    if(id!=0)
    {
        while(cnt<10)
        {
            cnt++;
            printf("i am parent my child process is %d\n",id);
            sleep(1);
        }
    }
    else
    {
        while(cnt<20)
        {
            cnt++;
            printf("i am child process i got id value as %d\n",id);
            sleep(1);
        }
    }
    
}