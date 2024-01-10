// 4.1 Read n number in an array and print it using pointer. [A]
#include<stdio.h>
#include<stdlib.h>
void main(){
	int size,i,j;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int arr[size],*ptr_arr;
	for(i=0;i<size;i++){
		printf("Enter element[%d] : ",i);
		scanf("%d",&arr[i]);	
	}
	ptr_arr=arr;
	for(i=0;i<size;i++){
		printf("value of pointer element[%d] : %d\n",i,*(ptr_arr+i));
		printf("value of array element[%d] : %d\n",i,(ptr_arr+i));
	}
}
