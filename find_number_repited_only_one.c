//find the element that appaeres once

#include<stdio.h>
int main()
{

	int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The element with single occurrence is %d ",find_number(arr,n));
}
int find_number(int arr[] ,int n)
{
      int i,sum,x,j,result=0;
     for(i=0;i<31;i++)
	{
		sum=0;
		x=(1<<i);
		for(j=0;j<n;j++)
		{
			if (arr[j] & x);
			sum++;
		}
			if(sum %3)
			result |=x;
	}
	return result;
}
    	
		
