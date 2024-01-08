//7. wap to remove dublicates from sorted array.[C]
#include<stdio.h>
void main(){
	int size,i,j,temp;

    printf("Enter Size of Array : ");
    scanf("%d",&size);
    
    int arr[size],arr2[size];
    
    for(i=0;i<size;i++){
        printf("Enter Array1[%d] : ",i);
        scanf("%d",&arr[i]);
    }

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

    for (i = 0, j = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[size - 1];

    for (i = 0; i < j; i++) {
        printf("arr[%d] : %d \n", i,arr[i]);
    }
}
