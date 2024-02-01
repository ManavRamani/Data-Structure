//11.3 wap to display n elements and sum of those elements using dynamic memory allocation. 
//	also release the memory occupied after displaying.

#include<stdio.h>
#include<stdlib.h>

void main(){
	int size,*ptr,*ptr1,sum=0,i,newsize;
	
	printf("Enter size of arr : ");
	scanf("%d",&size);
	
	ptr1 = (int*) malloc(size*sizeof(int));
	
	for(i=0;i<size;i++){
		printf("ptr[%d] : ",i);
		scanf("%d",&ptr1[i]);
		sum+=ptr1[i];
	}
	printf("\nSum is : %d\n",sum);
//	-----------------------------------------------------
	ptr = (int*) calloc(size,sizeof(int));
	
	for(i=0;i<size;i++){
		printf("ptr[%d] : ",i);
		scanf("%d",&ptr[i]);
		sum+=ptr[i];
	}
	printf("\nBefore sum is : %d\n",sum);
	sum=0;
	for(i=0;i<size;i++){
		printf("ptr[%d] : %d : add : %d\n",i,ptr[i],&ptr[i]);
	}
	printf("\nEnter size of arr : ");
	scanf("%d",&newsize);
	ptr=realloc(ptr,newsize*sizeof(int));
	
	for(i=size;i<newsize;i++){
		printf("ptr[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
	printf("\n-----------------------------------\n");
	for(i=0;i<newsize;i++){
		printf("ptr[%d] : %d : add : %d\n",i,ptr[i],&ptr[i]);
		sum+=ptr[i];
	}
	printf("\nAfter sum is : %d\n",sum);
	free(ptr);
}


