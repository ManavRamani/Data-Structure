// 17.1 WAP to implement Linear/Sequential Search. [A]

#include<stdio.h>
int linearSearch(int[],int,int);

void main(){
	int key,size,answer,i;
	
	printf("Enter Size of Array : ");
	scanf("%d",&size);
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("Enter value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Give Find key : ");
	scanf("%d",&key);
	
	answer = linearSearch(arr,key,size);
	
	if(answer==-1){
		printf("Key not Found\n");
	}else{
		printf("Find Key is Match : %d",answer);
	}
}

int linearSearch(int arr[],int key,int n){
	int i,ans,isCheck=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			isCheck=1;
			ans=arr[i];
			break;
		}
	}
	if(isCheck){
		return ans;
	}else{
		return -1;
	}
}














