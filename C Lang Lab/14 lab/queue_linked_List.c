#include<stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * ptr = NULL;
struct node * front;
struct node * rear;

void insert(int);
int deleteE();
void display();
void countQ();

void main() {
    int val,ch;
    do{
    	printf("\n1. Insert Element : \n");
    	printf("2. delete Element : \n");
		printf("3. Display Element : \n");
		printf("4. Count Element : \n");
		printf("5. Exit..! : \n");
		printf("Enter Your Choice : ");
    	scanf("%d",&ch);
    	switch(ch){
    		case 1:
    			printf("\nEnter Value : ");
    			scanf("%d",&val);
    			insert(val);
    			break;
    		case 2:
    			val=deleteE();
    			printf("\n%d : Delete Element SuccessFully!\n",val);
    			break;
    		case 3:
    			display();
    			break;
    		case 4:
    			countQ();
    			break;
    		case 5:
    			printf("\nThank you for Visit..!\n");
    			return 0;
    		default:
    			printf("\nWrong Choice....!\n");
    			break;
		}
	}while(1);
}

void insert(int item) {
    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOverflow\n");
        return;
    } else {
        ptr -> data = item;
        if (front == NULL) {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        } else {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
    }
}

int deleteE(){
	int x;
	struct node *t;
	
	if(front == NULL){
		printf("\nLink List Empty...\n");
	}
	else{
		t = front;
		x = front->data;
		front = front->next;
		free(t);
		return x;
	}
}

void display(){
	struct node * t;
	t=front;
	printf("\nQueue Linked List : [ ");
	do{
		printf("%d, ",t->data);
		t=t->next;
	}while(t!=NULL);
	printf("] ");
}

void countQ(){
	struct node * t;
	t=front;
	int count1=0;
	while(t->next!=NULL){
		count1++;
		t=t->next;
	}
	count1++;
	printf("\nCount is : %d\n",count1);
}











