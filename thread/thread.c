#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
void *fun(void *arg);
char msg[]="Hello Thread";
pthread_t a_thread;
int main()
{
	int re_thread,print_count1=0,print_count2=0,row=1;
	void *thread_result;
	re_thread=pthread_create(&a_thread,NULL,fun,(void *)msg);
	if(re_thread!=0)
	{
		perror("Thread creation is failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Waiting for thread to finish....\n");
		while(print_count1++<5)
 	         {
        	          if(row==1)
                	  {
                      	    printf("1");
                       	    row=2;
                 	 }
                 	 else
                          sleep(1);
          	}
		re_thread=pthread_join(a_thread,&thread_result);
		if(re_thread!=0)
		{
			perror("Thread join faied...\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			 while(print_count2++<5)
			{
        			if(row==2)
        			{
                			printf("2");
                			row=1;
        			}
        			else
                		sleep(1);
        		}
			printf("Pthread_join return %s\n",thread_result);
			printf("maessage is %s",msg);
			exit(EXIT_SUCCESS);
		}
	}
}	
void *fun(void *arg)
{
	printf("fun function return  prit is %s\n",(char*)arg);
	strcpy(msg,"Bye!!!");
	//printf("masg is %s\n",msg);
	pthread_exit("Thankyou for cpu time");
	//pthread_exit("***************** time");
}

