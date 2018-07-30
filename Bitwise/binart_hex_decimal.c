#include<stdio.h>
int main()
{
	int i,num=0;
	char bit;
	printf("Enter binary number:");
	for(i=0;i<=31;i++)
	{
		bit=getchar();
		if(bit=='0')
		{
			num=num<<1;
		}
		else if (bit=='1')
		{
			num=(num<<1)+1;
		}
		else{
			break;
		}
	}
	printf("Hexa decimal of this number is :%x\n",num);
	printf("decimal of this number is      :%d\n",num);
	
}
