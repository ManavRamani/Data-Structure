//6. wap to find common elements b/w two array. [C]

#include<stdio.h>
void main(){
	int size,i,j;

    printf("Enter Size of Array : ");
    scanf("%d",&size);
    
    int arr1[size],arr2[size];
    
    for(i=0;i<size;i++){
        printf("Enter Array1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    
	for(i=0;i<size;i++){
        printf("Enter Array2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    
	for(i=0;i<size;i++){
    	for(j=0;j<size;j++){
    		if(arr1[i]==arr2[j])
    		{
    			printf("common : %d\n",arr1[i]);
			}
		}
	}	
}