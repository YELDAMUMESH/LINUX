#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
int main() {
    char *p;
    int id;
    id=shmget(40,250,IPC_CREAT|0644);
    if(id<0){
        perror("shmget");
        return 0;

    }
    printf("id =%d\n",id);
    getchar();
    p=shmat(id,0,0);
    printf("enter the data:");
    scanf("%s",p);
    printf("%s",p);
    return 0;
}