#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

//CPU-1
void *start_one()
{
    int i;
    for(i=0;i<100;i++)
    printf("I am CPU-1, I have done %d times job.\n",i);
}

//CPU-2
void *start_two()
{
    int i;
    for(i=0;i<100;i++)
    printf("I am CPU-2, I have done %d times job.\n",i);
}

main(){
    pthread_t pt1,pt2;
    getchar();
    pthread_create(&pt1,NULL,start_one,NULL);
    pthread_create(&pt2,NULL,start_two,NULL);
    pthread_join(pt1, NULL);
    pthread_join(pt2, NULL);
    printf("end of main thread parent\n");

}