#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void binary(int n);
int reverse(int num);
int main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	printf("Binary of the number  		:");
	binary(num);
	printf("Binary after reverse number 	:");
	binary(reverse(num));
}		
int reverse(int num)
{
	int i,rev=0;
	for(i=0;i<=31;i++)
	{
		if(num&(1<<i))
		{
			rev=rev|(1<<(31-i));
		}
	}
	return rev;

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

