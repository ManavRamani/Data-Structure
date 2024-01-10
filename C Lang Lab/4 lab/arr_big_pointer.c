// 4.4 Write a program to find largest element in the array using Pointer. [B]

#include<stdio.h>
void main(){

    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    int max = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("The largest element in the array is: %d\n", max);
}	

//  Extra Code ... not for pointer....................................
//	int size,*max,i;
	
  //  printf("Enter Size of Array : ");
    //scanf("%d",&size);
    
	//int arr[size];
	
//	for(i=0;i<size;i++){
 //       printf("Enter Array[%d] : ",i);
   //     scanf("%d",&arr[i]);
   // }
    
  //  max=&arr[0];
    
//	for(i=1;i<size;i++){
  //     if(arr[i]>*max){
       	//	max=&arr[i];
	//   }
    //}
    
//    printf("\nmax is : %d",*max);
    
//}
