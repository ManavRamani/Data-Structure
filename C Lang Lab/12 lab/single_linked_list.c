//12.1 write a menu driven program to implement following oprations on the single linked list:
	//-insert a node at the end of the list[A].
	//-delete the first node of the linked list[A].
	//-delete the last node of the linked list[A].
	//-display the list[A].
	//-delete a specific node[B].
	//-count number of node[C].

#include<stdio.h>
#define size 20
struct node{
	int info;
	struct node *link;
};

struct node *first,*last;

void insert_first(int);
void insert_last(int);
void display();

void main(){
	int choice,val;
	
	do{
		printf("\nLinked list on opration : \n");
		
		printf("1. Insert a node at the first of the list.\n");
		printf("2. Insert a node at the end of the list.\n");
		printf("3. delete the first node of the linked list.\n");
		printf("4. delete the last node of the linked list.\n");
		printf("5. display the list.\n");
		printf("6. count number of nodes.\n");
		printf("7. for exit.\n\n");
		
		printf("Enter Your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter First Value : ");
				scanf("%d",&val);
				insert_first(val);
				break;
			case 2:
				printf("Enter Last Value : ");
				scanf("%d",&val);
				insert_last(val);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				printf("\nDisplay Data : ");
				display();
				break;
			case 6:
				count();
				break;
			case 7:
				printf("Thank you for visit..!");
				return;
			default:
				printf("Wrong Choice...!\n");
				break;
		}
	}while(choice>0);
}

void count(){
	struct node *temp;
	int count=0;
	temp=first;
	while(temp->link!=NULL){
		count++;
		temp=temp->link;
	}
	count++;
	printf("\nNode Count is : %d\n",count);
}

void display(){
	struct node *temp;
	temp=first;
	printf("\nNode Data : [ ");
	while(temp->link!=NULL){
		printf("%d, ",temp->info);
		temp=temp->link;
	}
	printf("%d ]\n",temp->info);
}

void insert_first(int x){
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node *));
	if(new_node==NULL){
		printf("Memory not available...!\n");
		return;
	}else if(first==NULL){
		new_node->info=x;
		new_node->link=NULL;
		first=new_node;
	}else{
		new_node->info=x;
		new_node->link=first;
		first=new_node;
	}
}

void insert_last(int x){
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node *));
	if(new_node==NULL){
		printf("Memory not available...!\n");
		return;
	}else if(first==NULL){
		new_node->info=x;
		new_node->link=NULL;
		first=new_node;
	}else{
		new_node->info=x;
		new_node->link=NULL;
		struct node *temp;
		temp=first;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=new_node;
		new_node=last;
	}
}

