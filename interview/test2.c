#include <stdio.h>

   // #define printf(s) (!printf(s))

    int main(int argc, char *argv[]){

       // if (fork()==0)//this is for perents process  
       // 	printf("Heillo ");
       //  else
       //     	printf("world!");
      // int a = printf("Hello ");
      //	printf ("A=%d\n",a );    	
       if (  ( printf("Hello ") ) )
		printf("Hello");
	else
		printf("World"); 
	int i=5;    	
	printf("%d\n",++i * ++i);

    }
