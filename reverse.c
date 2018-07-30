#include<stdio.h>
int reverse(int);
int main()
{
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        printf(" number is  %d\n",n);
        printf("reverse number %d\n",reverse(n));
}
int reverse(int n)
{
	int rev;
        while(n)
        {
                rev=(rev*10)+(n%10);
                n=n/10;
        }
        return rev;
}

