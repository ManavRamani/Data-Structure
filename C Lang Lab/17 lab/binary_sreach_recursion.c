// 17.3 WAP to implement Binary Search using recursion. [C]

#include<stdio.h>
int binarySearch(int[], int, int, int);

void main(){
	int key,high,answer,low;
	
	printf("Enter Size of Array : ");
	scanf("%d",&high);
	int arr[high];
	
	for(low=0;low<high;low++){
		printf("Enter value of arr[%d] : ",low);
		scanf("%d",&arr[low]);
	}
	
	printf("Give Find key : ");
	scanf("%d",&key);
	
	answer = binarySearch(arr,key,0,high);
	
	if(answer==-1){
		printf("Key not Found\n");
	}else{
		printf("Find Key is Match arr[%d]: %d",answer,arr[answer]);
	}
}

int binarySearch(int arr[],int key, int low,int high){
	if(low<=high){
		int mid=floor((low+high)/2);
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]<key){
			binarySearch(arr,key,mid+1,high);
		}else{
			binarySearch(arr,key,low,mid-1);
		}
	}
	return -1;
}
