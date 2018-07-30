//here numbers from 1 to N in an array. out of these, one of the number gets duplicated and one is missing. The task is to write a program to find out the duplicate number. Conditions: you have to do it in O(n) time without using any auxilary space (array, bitsets, maps etc..).
#include<stdio.h>
#define MAX 5
main(){
        int a[MAX]={1,2,3,1,55555};
        int num=1, i=0, missed=0, duplicated=0;
        while(num <= MAX ){
		printf("nimber is %d:  and arrary is %d:\n" ,num,a[num-1]);
                if(num != a[num-1]){
                        missed=num;
                        duplicated=a[num-1];
                }
                num++;
        }
        if(missed && duplicated)
                printf("Missed number is %dn Duplicated number is %dn", missed, duplicated);
}			
