#include<stdio.h>
int print_n(unsigned int n);
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
print_n(n);
}
int  print_n(unsigned int n)
{
	if (n > 1)
		print_n(n-1);
	
		printf ("%d\n",n);
		//return n;
	
}
		
