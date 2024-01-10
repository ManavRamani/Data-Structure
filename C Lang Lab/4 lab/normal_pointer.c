// 4.0 Normal pointer :-
#include<stdio.h>

void main()
{
	int var;
	int *ptr_var;
	printf("enter value : ");
	scanf("%d",&var);
	ptr_var=&var;
	printf(" value of var : %d\n",var);
	printf(" value of var : %d\n",&var);
	printf(" value of var : %d\n",ptr_var);
	printf(" value of var : %d\n",*ptr_var);
}
