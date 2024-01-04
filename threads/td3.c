#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

void *thr_fn()
{
    pid_t pid;
    pthread_t tid;
    pid=getpid();
    tid=pthread_self();//print calling thread id
    printf("Thread ID = %d\n",(unsigned int)tid);
    printf("pid ID =%ld\n",(unsigned int)pid);
    return 0;

}

int main(void)
{
    int err;
    pthread_t tid;
    err=pthread_create(&tid,NULL,thr_fn,NULL);
    if (err != 0)
    printf("can't create thread:%S\n",strerror(err));
    sleep(3);
    exit(0);
    
}