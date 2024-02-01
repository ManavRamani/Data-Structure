// print array using pointer ...
#include<stdio.h>
void main(){
	int i,size,*ptr;
	
	printf("Enter size of arr : ");
	scanf("%d",&size);
	
	int arr[size];
	ptr=&arr[0];
	
	for(i=0;i<size;i++){
		printf("ptr[%d] : ",i);
		scanf("%d",ptr+i);
	}
	
	printf("\n----------------------\n");
	
	for(i=0;i<size;i++){
		printf("ptr[%d] : %d\n",i,*(ptr+i));
	}
}
