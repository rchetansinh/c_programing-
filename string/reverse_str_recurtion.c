#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void revstr(char *str);
char* revstr(char *str);
int main()
{       char str[20];
	printf("Enter  string:");
	scanf("%s",str);
	printf("\n");
	//revstr(str);
	printf(" reverse string is:%s",revstr(str));
}
//void revstr(char str[])
//{
//	int j,i;
//	char temp;
//	for(i=0,j=strlen(str)-1;i<j;i++,j--)
//	{
//		temp=str[j];
//		str[j]=str[i];
//		str[i]=temp;
//	}	

char* revstr(char str[])
{
	int len=strlen(str)-1;
	if(len>=0)
	{
		len--;
		return(revstr(str));

	}	
}
