//9.3 Circular Queue : CEnqueue & CDequeue.

#include<stdio.h>
#define size 3
int cq[size];
int f=-1,r=-1;

void cenqueue(int val);
int cdequeue();
void display();

void main(){
	
	int choice,value,index;

    do {
        printf("\nCQueue Operations :\n");
        printf("1. CEnqueue\n");
        printf("2. CDequeue\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
		scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Enter the value to cenqueue: ");
                scanf("%d",&value);
                cenqueue(value);
                printf("Value %d cenqueued into the CQueue.\n", value);
                break;

            case 2:
                value = cdequeue();
                if (value != -1)
                    printf("cdequeued value: %d\n", value);
                else
                    printf("CQueue is empty. Cannot cdequeue.\n");
                break;

            case 3:
                display();
                break;

            case 0:
                printf("thank you for visit.\n");
                return;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != -1);
    
	
}

void cenqueue(int val)
{
	if(r==size-1)
	{
		r=0;
	}
	else
	{
		r++;
	}
	if(f==r)
	{
		printf("CQueue Overflow\n");
		if(r==0)
		{
			r=size-1;
		}
		else
		{
			r--;
		}
	}
	else
	{
		cq[r]=val;
		if(f==-1)
		{
			f=0;
		}
	}
}

int cdequeue(){
	int y;
	
	if(f==-1)
	{
		return -1;
	}
	else
	{
		y=cq[f];
		if(f==r)
		{
			f=r=0;
		}
		if(f==size-1)
		{
			f=0;	
		}else
		{
			f++;	
		}
		return y;
	}
}

void display(){
	int i;
	if(f<=r){
		for(i=f;i<=r;i++){
			printf("%d\t",cq[i]);
		}
	}else{
		for(i=f;i<=size-1;i++){
			printf("%d\t",cq[i]);
		}
		for(i=0;i<=r;i++){
			printf("%d\t",cq[i]);
		}
	}
}
