#include <pthread.h>
#include <stdio.h>


void *run_func(void *arg)
{
    char* s = arg;
    int i;

    for(i=0; i<=4; i++){
        printf("Thread %s: %d\n",s,i);
        
    }

    return NULL;
}

int main(void)
{
    pthread_t t1;
    pthread_t t2;
    printf("Launghing Threads!\n");
    pthread_create(&t1, NULL, run_func, "1");
    pthread_create(&t2, NULL, run_func, "2");
    pthread_join(t1, NULL); 
    pthread_join(t2, NULL); 
    printf("Threads Complete\n");

}

