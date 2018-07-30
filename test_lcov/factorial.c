#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number  :");
	scanf("%d",&n);
	if(n<0)
	{
		printf("negative number factorial no possible\n");
		return 0;
	}
	else
	{
		printf("Factorial of number %d id %d\n",n,fact(n));
	}
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return (n* fact(n-1));
}
	
