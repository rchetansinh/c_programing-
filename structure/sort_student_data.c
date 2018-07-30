#include<stdio.h>
#include<string.h>
#define N 5 
typedef struct strudnet 
{
	int roll ;
	int marks;
	char name[20];
}DATA ;
void display(DATA data);
int main()
{
       DATA data[5];
	int i;
	for (i=0;i<N;i++)
	{
		printf ("Enter a roll no:");
		scanf ("%d",&data[i].roll);
		printf ("Enetr a marks");
		scanf ("%d",&data[i].marks);
		printf ("Enter a name:");
		scanf ("%s",data[i].name);
	}
	for(i=0;i<N;i++)
	{
		display(data[i]);
	}

}
void display(DATA data)
{
	printf("%d\n",data.roll);
	printf("%d\n",data.marks);
	printf("%s\n",data.name);
}
void sort (
