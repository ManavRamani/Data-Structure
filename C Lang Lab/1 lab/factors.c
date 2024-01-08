//wap to find factors of a given number : [A]
#include<stdio.h>
void main(){
	int n,i;
	
	printf("Enter any Number : ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d , ",i);
		}
	}
	
}
