#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void binary(int n);
int rotet_right(int num ,int n);
int rotet_left(int num ,int n);
int main()
{
	int num,n;
	printf("Enter number to be roteted");
	scanf("%d",&num);
	printf("Enter number of bit to be rotet");
	scanf("%d",&n);
	printf("Binary of the number is :  ");
	binary(num);
	printf("After right rotet:         ");
	binary(rotet_right(num ,n));
	printf("After left rotet:          ");
	binary(rotet_left(num,n));
}		
int rotet_right(int num,int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(num&1)	
		{
			num=((num>>1)|(1<<31));
		}
		else
		{
			num=((num>>1) & ~(1<<31));
		}
	}
	return num;

}
int rotet_left(int num ,int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(num&1)
		{
			//num=((num << 1)	|(1>>1));
			num=((num << 1)|1);
		}
		else
		{
			num=(num<<1)&(~1);
		}
	}
	return num;
}
void binary(int n)
{
	int i;
	for(i=31;i<=(sizeof(n)*CHAR_BIT-1);i--)
         {
                   putchar((n&(1<<i))?'1':'0');
			if(i%8 == 0)
				putchar(' ');
			
          }       
		printf("\n");
}

