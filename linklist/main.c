#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
NODE *add_beging(NODE *ptr,int data)
{
	NODE *temp=NULL;
	temp =(NODE*)malloc(sizeof(NODE*));
	temp->next=NULL;
	if(temp==NULL)
	{
		printf("Linklist is Empty\n");
		return;
	}
	temp->info=data;
	temp->next=ptr;
	ptr=temp;
	return ptr;
}
void display(NODE *ptr)
{
	NODE *temp;
	temp=ptr;
	while(temp)
	{
		printf("%d\t",temp->info);
		temp=temp->next;
	}

}
NODE *add_last(NODE *ptr,int data)
{
	NODE *temp=NULL,*p=NULL;
	temp=(NODE*)malloc(sizeof(NODE*));
	temp->next=NULL;
	if(temp==NULL)
	{
		printf("Failed to allocated memory\n");
		return ;
	}
	temp->info=data;
	p=ptr;
	if(p==NULL){
		p=(NODE*)malloc(sizeof(NODE*));
		p=temp;
		return p;
	}
	else{

	while(p->next!=NULL)
		p=p->next;
	}
	p->next=temp;
	return ptr;
	
}
NODE* add_loaction(NODE *ptr,int data)
{
	NODE *temp=NULL;
	NODE *p=NULL;
	char name[20];
	temp=(NODE*)malloc(sizeof(NODE*));
	temp->next=NULL;
	if(temp==NULL)
		printf("No space in memory\n");
	temp->next=ptr;
	ptr=temp;
	printf("where you want to add node if after thne type after if befor then typr befor");
	scanf("%s",name);
	if(name == "before"){
		p=add_beging(ptr,data);
	}
	else if(name == "after"){
		p=add_last(ptr,data);	
	}
	else{
	}
		
}
int main()
{
	NODE *start=NULL;
	int choice,data;
	while(1)
	{
		printf("\n1.add at beging \n2.Display \n3.add_last\n4.add at loaction\n 5.quit");
		printf("Enter a choise:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter a data:");
				scanf("%d",&data);
				start=add_beging(start,data);
				break;
			case 2:display(start);
				break;
			case 3:	printf("Enter a data to append at last:");
				scanf("%d",&data);
				start=add_last(start,data);
				break;
			case 4:printf("Enter at any palce:");
				scanf("%d",&data);
				start=add_loaction(start,data);
				break;
			case 5:return 0;
			default:
				printf("Enter a wrong choice\n");
		}
	}
}

	
