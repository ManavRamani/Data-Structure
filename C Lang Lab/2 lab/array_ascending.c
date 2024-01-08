//5. Read n numbers in an array and print it in ascending order.[B]
#include<stdio.h>
void main(){
	int temp,size,i,j;
	printf("Enter Size of Array : ");
    scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\n");
	
	for(i=0;i<size;i++){
        printf("Enter Array[%d] : %d\n",i,arr[i]);
    }
    
	printf("\n");
    
	for(i=0;i<size-1;i++){
    	for(j=i+1;j<size;j++){
    		if(arr[i]>arr[j])
			{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<size;i++){
        printf("print Array[%d] : %d\n",i,arr[i]);
    }
}
