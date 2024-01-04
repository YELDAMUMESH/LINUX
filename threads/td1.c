#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
pthread_t tid;
void* thread1()
{
    sleep(3);
    printf("newly created thread sleeping now executing\n");
    return NULL;

}

int main(void)
{
int ret=pthread_create(&tid,NULL,thread1,NULL);
if(ret!=0)
printf("thread is not created\n");
else
printf("thread is created\n");
pthread_join(tid,NULL);
printf("process get terminated\n");
return 0;
}