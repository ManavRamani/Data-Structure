//4. wap to copy all the elements of one array to another array.[B]
#include<stdio.h>
void main(){
	int size, i;

    printf("Enter Size of Array : ");
    scanf("%d",&size);
    
    int arr[size],arr2[size];
    
    for(i=0;i<size;i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0;i<size;i++){
        printf("Enter Array[%d] : %d\n",i,arr[i]);
		arr2[i]=arr[i];
    }
    
    printf("\n");
    for(i=0;i<size;i++){
        printf("Enter Array2[%d] : %d\n",i,arr2[i]);
    }
    
}
