#include<stdio.h>
swap(int *min,int *p2){
int temp;
temp=*min;
*min=*p2;
*p2=temp;

}
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubble_sort(int *arr,int n){
int temp,min,i,j;
for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
int main(){
int arr[]={54,89,45,12,78},i;
int n=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n);
printf("sorted array is :\n");
printArray(arr,n);
}





