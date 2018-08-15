
//to print helloworld 

#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>


void *hw(void *vargp)				//function being called while implementing thread
{
	printf("sleep of 1\n");
    	sleep(1);				//sleep holds the thread for a while, duration can 
						// be given as argument
    	printf("sleep of 2\n");
    	sleep(2);
	printf("Hello World\n");
	sleep(1);
    	return NULL;
}
  
int main()
{
    pthread_t id;				//giving an id to identify the thread
    printf("program to print helloworld\n");	
    pthread_create(&id, NULL, hw, NULL);	//calling the create function which takes 4 args
    pthread_join(id, NULL);			//this function lets particular thread to complete
    printf("end of program\n");
    exit(0);
}

