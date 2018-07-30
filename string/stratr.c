#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
char* ststr(char *,char *);
int main()
    {

        //char *s1,*s2;
	char *position;
	//s1=(char*) malloc(20);
	//s2=(char*) malloc(20);
        //printf("Enter string:");
        //fgets(s1,sizeof(s1)+1,stdin);
	////puts(s1);
	//__fpurge(stdin);
        //printf("Enter word to find:");
        //fgets(s2,sizeof(s2)+1,stdin);
	//__fpurge(stdin);
	//puts(s2);
	char s1[MAX],s2[MAX];
	printf("Enter string:");
        fgets(s1,sizeof(s1)+1,stdin);
        puts(s1);
        printf("Enter word to find:");
        fgets(s2,sizeof(s2)+1,stdin);
	//printf("s1 is %s and s2 %s",s1,s2);
        position=ststr(s1,s2);
        if(position)
        printf("word is found at %d loc\n",position);
        else
        printf("word not found");
        return 0;

    }
char *ststr(char *s1,char *s2)
{
	
    int flag=1;
    int i,j;
    while(*s1)
    {
        if(s1[i]==s2[0])
        for(j=i;s2[j]!= '\0';j++)
        {
            if(s1[j]!=s2[j])
            flag=0;
        }
	i++;
    }
    if(flag)
    return i;
    else
    return 0;
}
