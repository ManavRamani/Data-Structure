// wap to ccal power using loop and recursion. [B]
#include<stdio.h>
int power(b,p){
	int ans=1;
	if(p==0){
		return 1;
	}else{
		return b*power(b,p-1);
	}
}
void main(){
	int base,p,i,ans=1,ans1;
	
	printf("Enter Base Number : ");
	scanf("%d",&base);
	printf("Enter Power : ");
	scanf("%d",&p);
	ans1=power(base,p);
	for(i=1;i<=p;i++){
		ans*=base;
	}
	printf("%d base of power %d : %d\n",base,p,ans);
	printf("%d base of power %d : %d using recursion",base,p,ans1);
	
}


