/*
	13.2 write a menu driven program to implement folloeing oprations on the ordered linked list.
		- Insert a node such that linked list is in ascending order. [A]
		- Display the list. [A]
*/

#include<stdio.h>
struct node{
	int info;
	struct node *link;
};

struct node *first,*last;

void ordered_insert(int);
void count();
void display();

void main(){
	int choice,val;
	
	do{
		printf("\nOrdered Linked list on opration : \n");
		
		printf("1. Insert a node at the Ordered of the list.\n");
		printf("2. display the list.\n");
		printf("3. count number of nodes.\n");
		printf("4. for exit.\n\n");
		
		printf("Enter Your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter Value : ");
				scanf("%d",&val);
				ordered_insert(val);
				break;
			case 2:
				printf("\nDisplay Data : ");
				display();
				break;
			case 3:
				count();
				break;
			case 4:
				printf("Thank you for visit..!");
				return;
			default:
				printf("Wrong Choice...!\n");
				break;
		}
	}while(choice>0);
		
}

void ordered_insert(int val){
	struct node *new_node, *pre, *save;
	new_node=(struct node *)malloc(sizeof(struct node *));
	
	if(new_node==NULL){
		printf("Memory not available...!\n");
		return;
	}else{
		new_node->info=val;
		if(first==NULL){
			new_node->link = NULL;
			first=new_node;
		}else if(new_node->info <= first->info){
			new_node->link=first;
			first = new_node;
		}else{
			save=pre=first;
			while((save!=NULL) && (new_node->info>=save->info)){
				pre=save;
				save=save->link;
			}
			new_node->link=save;
			pre->link=new_node;
		}	
	}
}

// Count :
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

// Display :
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


