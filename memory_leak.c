#include<stdio.h>
#include<stdlib.h>

int main()
{
	 int *ptr = (int*)malloc(10);
	printf ("in ptr ==>%d\n",*ptr);
	void free(ptr);
   
	printf ("in ptr ==>%d\n",ptr);
//    return 0;
printf("current break point is %p\n",brk(0));
}
// to see the memory leak valgrind –leak-check=full ./free free is  excutable file 
