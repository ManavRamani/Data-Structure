// wap to find GCD () using loop and recursion : [B]
#include<stdio.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
void main(){
	int n1,n2,i,n,ans,ans2;
	
	printf("Enter 1st Number : ");
	scanf("%d",&n1);
	printf("Enter 2nd Number small then 1st number : ");
	scanf("%d",&n2);
	
	ans2 = gcd(n1,n2);
	
	if(n1>n2){
		n=n1;
	}else{
		n=n2;
	}
	
	for(i=1;i<=n;i++){
		if(n1%i==0&&n2%i==0){
			ans=i;
		}
	}
	
	printf("%d is GCD number...\n",ans);
	printf("%d is GCD number using recursion...",ans2);
	
}

