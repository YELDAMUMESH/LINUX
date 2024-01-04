#include<unistd.h>
#include<stdio.h>
int main()

{
    printf("before fork() called\n");
    fork();
    printf("after fork() called\n");
    printf("after fork()called\n");
    

}