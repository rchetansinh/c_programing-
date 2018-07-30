#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void binary(int n);
int main()
{
	int i,n=4;
	printf("Binary of number:    ");
	binary(n);
	//  method 1
	for(i=0;i<=(sizeof(n)*CHAR_BIT-1);i++)
	{
		if((n&(1<<i)) != 0)
			break;
	}
	for(i=i+1;i<=(sizeof(n)*CHAR_BIT-1);i++)
	{
		n=n^(1<<i);
	}
	printf("2's Complement is :");
	binary(n);
	
	// Method 2 
	/*n=(~n);
	printf("1's Compliment is :  ");	
	binary(n);	
	//n=n | (1<<0);
	n=n + 1;
	//n=n | 1;
	printf("2's Compliment is :  ");	
	binary(n);*/
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

