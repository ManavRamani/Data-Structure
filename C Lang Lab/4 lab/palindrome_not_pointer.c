// write a program to check if the string is a palindrome or not using Pointer. [C]
#include<stdio.h>
#include<string.h>

void main(){
	int i,count=0,length;
	char str[10],*ptr;
	
	printf("Enter String : ");
	gets(str);
	
	length=strlen(str);
	
	ptr=str;
	for(i=0;i<length/2;i++){
		if(*(ptr+i)==*(ptr+(length-i-1))){
			count++;
		}else{
			printf("\nNot Palindrome");
			break;
		}
	}
	printf("count : %d",count);

	if(count==length/2){
		printf("\nThis String is Palindrome....");
	}	
}
