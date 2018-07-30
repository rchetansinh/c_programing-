#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<semaphore.h>
#include<unistd.h>
#define WORK_SIZE 1024
char work_area[WORK_SIZE];
void* thread_function(void*arg);
sem_t bin_sem;
int main()
{
	int res;
	pthread_t a_thread;
	void *thread_result;
	res=sem_init(&bin_sem,0,0);
	if(res!= 0)
	{	
		perror("Semaphore initilation failed!!1");
		exit(EXIT_FAILURE);
	}
		res=pthread_create(&a_thread,NULL,thread_function,NULL);
		if(res!= 0)
		{	
			exit(EXIT_FAILURE);
		}
		printf("Input sometext END to finish!!!\n");
		while(strncmp("end",work_area,3) != 0){
			fgets(work_area,WORK_SIZE,stdin);
			sem_post(&bin_sem);
		}
		printf("!!!Waiting for Thread to finish!!!\n");
		res=pthread_join(a_thread,&thread_result);
		if(res!= 0)
                {
                         exit(EXIT_FAILURE);
                }
		printf("Threads join!!!\n");
		sem_destroy(&bin_sem);
		exit(EXIT_SUCCESS);
}
void *thread_function(void *arg)
{
	printf("In thread function\n");
	sem_wait(&bin_sem);
	while((strncmp("end",work_area,3)) != 0){
		printf("you Input %d cherecter\n",strlen(work_area)-1);
		sem_wait(&bin_sem);
	}
pthread_exit(NULL);
}
				


