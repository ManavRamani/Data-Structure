/*
	13.2 write a menu driven program to implement folloeing oprations on the ordered linked list.
		- Insert a node such that linked list is in ascending order. [A]
		- Display the list. [A]
		- Delete a frist node of the linked list. [B]
		- Delete a last node of the linked list. [B]
		- Delete a specific node. [C]
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
		
		printf("1. Insert a node at the first of the list.\n");
		printf("2. delete the first node of the linked list.\n");
		printf("3. delete the last node of the linked list.\n");
		printf("4. delete specific node of the linked list.\n");
		printf("5. display the list.\n");
		printf("6. count number of nodes.\n");
		printf("7. for exit.\n\n");
		
		printf("Enter Your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter First Value : ");
				scanf("%d",&val);
				ordered_insert(val);
				break;
			case 2:
//				val=delete_first();
				printf("Delete First : %d\n",val);
				break;
			case 3:
//				val=delete_last();
				printf("Delete Last : %d\n",val);
				break;
			case 4:
				printf("Delete Element value : ");
				scanf("%d",&val);
//				val=delete_specific(val);
				printf("Delete Specific : %d\n",val);
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



