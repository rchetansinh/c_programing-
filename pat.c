#include<stdio.h>
int main()
{
	int i ,j;
        for (i=0;i<5;i++)
	{
/*		if(i==0 || i==4)
		{
			for(j=0;j<5;j++)
			{
				printf("*");
			}
		}
		if((i!=0)||(i!=4))
		{
			for(j=0;j<5;j++)
			{
                           	if(j==0 || j==4)
			   	{
					printf("*");
			   	}
				else
				{
					printf(" ");
				}
			}*/
		for(j=0;j<5;j++)
		{
			if(i==0||i==4)
			{
				printf("*");
			}
			else {
				if (j==0 || j==4)
				{
				printf("*");
				}
				else
				{
				printf(" ");
				}
	
			}
		}
				
	printf("\n");
	}
}

