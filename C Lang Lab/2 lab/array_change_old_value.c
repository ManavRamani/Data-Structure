//3. Read n number in an array then read two differnet numbers, 
//	replace 1st number with 2nd number in array and print the final array.[A]

#include<stdio.h>
void main(){
	int n1,n2,i,size;
	
	printf("Enter Size of Array : ");
    scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter old Value : ");
    scanf("%d",&n1);
	printf("Enter New Value : ");
    scanf("%d",&n2);
    
    for(i=0;i<size;i++){
        if(arr[i]==n1)
        {
        	arr[i]=n2;
		}
    }
    
    for(i=0;i<size;i++){
        printf("Enter Array[%d] : %d\n",i,arr[i]);
    }
}
