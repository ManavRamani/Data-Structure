/*
16.2 write a menu driven program to implement following operations on the Doubly linked list
	- Insert a node at the beginning of the linked list
	- Insert a node at the end of the linked list
	- Display the list 
	- delete a specific node
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *lptr,*rptr;
};

struct node *L,*R;

void doublyInsertFirst(int x) {
	struct node *new_node;
   	new_node=(struct node *)malloc(sizeof(struct node *));
    
    if (new_node == NULL) {
       		printf("Memory not allocated\n");
			return;
    } 
	else {
		new_node->info = x;
		if(L==NULL){
		new_node->lptr=NULL;
        new_node->rptr=NULL;
        L=R=new_node;
		}
		else{
		new_node->lptr=NULL;
		new_node->rptr=L;
		L->lptr=new_node;
		L=new_node;
		}

	}
}
void doublyInsertLast(int x) {
	struct node *new_node;
   	new_node=(struct node *)malloc(sizeof(struct node *));
    
    if (new_node == NULL) {
       		printf("Memory not allocated\n");
			return;
    } 
	else {
		new_node->info = x;
		if(L==NULL){
		new_node->lptr=NULL;
        new_node->rptr=NULL;
        L=R=new_node;
		}
		else{
		new_node->rptr=NULL;
		new_node->lptr=R;
		R->rptr=new_node;
		R=new_node;
		}

	}
}
void display(){
	struct node *temp;
	temp=L;
	while(temp!=R){
		printf("You entered element:%d\n",temp->info);
		temp=temp->rptr;
	}
	printf("You entered element:%d\n",temp->info);
}
void main(){
	int ch,x;
	
	printf("List ofChoice for operation...\n");
	printf("1.Insert node at beginning\n");
	printf("2.Insert node at last\n");
	printf("3.Display\n");
	printf("4.Enter -1 for Exit\n"); 
	
	printf("Enter Choice : ");
	scanf("%d",&ch);
	
	while(ch!=-1){
		switch(ch){
			case 1:
				printf("Enter a Number : ");
				scanf("%d",&x);
				doublyInsertFirst(x);
				break;
				
			case 2:
				printf("Enter a Number : ");
				scanf("%d",&x);
				doublyInsertLast(x);
				break;
				
			case 3:
				display();
				break;
				
			default:
				printf("Invalid Choice...!\n");
				break;
		}
		printf("Enter Choice : ");
		scanf("%d",&ch);
	}
}
