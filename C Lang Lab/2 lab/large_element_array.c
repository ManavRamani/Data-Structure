//2. wap to find the largest elements in an array. [A]
#include<stdio.h>
void main(){
	int size,max,i;
	
    printf("Enter Size of Array : ");
    scanf("%d",&size);
    
	int arr[size];
	
	for(i=0;i<size;i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    
	for(i=1;i<size;i++){
       if(arr[i]>max){
       		max=arr[i];
	   }
    }
    
    printf("\nmax is : %d",max);
    
}
