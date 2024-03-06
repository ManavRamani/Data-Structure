// 17.2 WAP to implement Binary Search using loop. [B]

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
	int mid=0,isCheck=0,ans;
	
	while(low<=high){
		mid=floor((low+high)/2);
		printf("mid : %d, low :%d, high :%d\n",mid,low,high);
		if(arr[mid]==key){
			isCheck=1;
			ans=mid;
		}else if(arr[mid]<key){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	if(isCheck){
		return mid;
	}else{
		return -1;
	}
}



