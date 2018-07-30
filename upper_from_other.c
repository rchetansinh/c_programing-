#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main(int argc ,char *argv[])
{
	if(argc != 2)
	{
		fprintf(stderr,"usege:./upper file\n");
	//	exit(1);
	}
//	if(fopen(argv[1],"r"))
//	{
//		fprintf(stderr,"could not able yo redirect file ti stdin %s\n",argv[1]);
//		exit(2);
//	}
	execlp("/home/rchetansinh/Desktop/c/upper","upper",0);
}

