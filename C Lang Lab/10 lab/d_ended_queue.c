//10.3 implement double ended Queue.

#include<stdio.h>
#define size 100
int dq[size];
int f=-1,r=-1;

void enqueue(int val);
int dequeue();
void display();

void main(){
	
	int choice,value,index;

    do {
    	
        printf("\nQueue Operations :\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
		scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d",&value);
                enqueue(value);
                printf("Value %d enqueued into the Queue.\n", value);
                break;

            case 2:
                value = dequeue();
                if (value != -1)
                    printf("dequeued value: %d\n", value);
                else
                    printf("Queue is empty. Cannot dequeue.\n");
                break;

            case 3:
                display();
                break;

            case 0:
                printf("thank you for visit.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != -1);
    
	
}

void enqueue(int val){
	if(r==size-1){
		printf("Queue Overflow\n");
		return;
	}
	else{
		r++;
		dq[r]=val;
		if(f==-1){
			f=0;
		}
	}
}

void dqinsert(int val){
	if(f==1){
		
	}
}

int dequeue(){
	int y;
	
	if(f==-1){
		return -1;
	}else{
		y=dq[f];
		f++;
		return y;
	}
}

void display(){
	int i;
	for(i=f;i<=r;i++){
		printf("%d\t",q[i]);
	}
}
