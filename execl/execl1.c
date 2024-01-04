#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int ret=10;
    printf("i am going to execl an vfork program\n");
    execl("/home/umesh/umesh/vfork/a.out","./a.out",NULL);
    printf("I executed vfork1 prog\n",ret);


}
