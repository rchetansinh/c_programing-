#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *src="Hello",des[20];
    int i=0,j=0;
//    des =malloc(sizeof(6));
    while (src[i] != '\0')
    {
        //printf("****\n");
     
   // printf("%c\n",src[i]);
        des[i]=src[i++];

    printf("%c\n",des[i]);
        //des++;
        //src++;
        //i++;
        //j++;

    }
    des[i] ='\0';
    printf("%c\n",des[i]);
   // for(i=0;i<=5;i++){
   // printf("%c",src[i]);
   // }
    printf("des = %s\n",&des[0]);
    printf("\n");

}
