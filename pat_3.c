#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<6;i++,printf("\n"))
	{
		for(j=0;j<6;j++)
		{
			if(i==0 || i==2)
			{
				printf("*");
			}
			else	
			{
				if((j==0)||(j==5)&(i==1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
	/*	for(j=0;j<4;j++)
		{	
			if((i>2) && (j==0))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}*/

	}
}
