#include<stdio.h>
int main()
{
// 1 2 3 5 8 13 21
//
  int i,x=0,y=1,num,z;
  printf("Enter number ");
	scanf("%d",&num);
	printf("%d\t",y);
	for (i=1;i<num;i++)
	{
		z=x+y;
		printf("%d\t",z);
		x=y;		
		y=z;
			
	}
}
