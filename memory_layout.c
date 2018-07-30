#include<stdio.h>
#pragma pack(1)
//#include<conio.h>
//int i =2;  //it is globle verible srore in bss segment
//int j ;  //it is globle verible srore in bss segment
int main()
{
	//static int p=10;
	static int p;
//	printf("%d\n",sizeof(int));
	return 0;
}

///for to see size in memory   gcc memory-layout.c -o memory-layout then size memory-layout
