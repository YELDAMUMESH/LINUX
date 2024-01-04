#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    printf("embedded systems\n");
    pid=fork();
    if(fork>0)
    printf("linux programming\n");
    else
    printf("Micro controlers\n");
}