// 4.2 write a C program to swap two number, calling an UDF by value.[A]

#include<stdio.h>
void swap(int a,int b);
void main()
{
	int n1,n2;
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	swap(n1,n2);
}
void swap(int a,int b){
	int t_person;
	
	printf("\nBefore Swap : \nValue of A : %d\n",a);
	printf("Value of B : %d\n",b);
	
	t_person=a;
	a=b;
	b=t_person;
	
	printf("\nAfter Swap : \nValue of A : %d\n",a);
	printf("Value of B : %d\n",b);
}
