//1. read n number in array and print their sum average
#include<stdio.h>
void main(){
    int size, i,sum=0;
    float avg;

    printf("Enter Size of Array : ");
    scanf("%d",&size);
    
    int arr[size];
    
    for(i=0;i<size;i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/size;
    printf("\nSum is : %d",sum);
	printf("\nAverage is : %.2f",avg);
    
}
