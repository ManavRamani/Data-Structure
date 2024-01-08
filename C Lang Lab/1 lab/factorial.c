//1. wap to find factorial of a number usingb loop and recursion. [A]
#include<stdio.h>
int fact(int n)
{
	if(n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
	
}

void main()
{
	int n,ans=1,i,factAns;
	
	printf("Enter Factorial Number : ");
	scanf("%d",&n);
	
	factAns = fact(n);
	for(i=1;i<=n;i++){
        ans=ans*i;
    }
	
    printf("fact is : %d \n",ans);
	printf("function fact ans is : %d",factAns);
}

