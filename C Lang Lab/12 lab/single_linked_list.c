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
int delete_first();
int delete_last();
void display();

void main(){
	int choice,val;
	
	do{
		printf("\nLinked list on opration : \n");
		
		printf("1. Insert a node at the first of the list.\n");
		printf("2. Insert a node at the end of the list.\n");
		printf("3. delete the first node of the linked list.\n");
		printf("4. delete the last node of the linked list.\n");
		printf("5. delete specific node of the linked list.\n");
		printf("6. display the list.\n");
		printf("7. count number of nodes.\n");
		printf("8. for exit.\n\n");
		
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
				val=delete_first();
				printf("Delete First : %d\n",val);
				break;
			case 4:
				val=delete_last();
				printf("Delete Last : %d\n",val);
				break;
			case 5:
				printf("Delete Element value : ");
				scanf("%d",&val);
				val=delete_specific(val);
				printf("Delete Specific : %d\n",val);
				break;
			case 6:
				printf("\nDisplay Data : ");
				display();
				break;
			case 7:
				count();
				break;
			case 8:
				printf("Thank you for visit..!");
				return;
			default:
				printf("Wrong Choice...!\n");
				break;
		}
	}while(choice>0);
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

// Delete First :
int delete_first(){
	struct node *save;
	int x;
	
	if(first==NULL){
		printf("Underflow...!\n");
		return 0;
	}else{
		save=first;
		first=first->link;
		x=save->info;
		free(save);
		return x;
	}
}

// Delete Last :
int delete_last(){
	struct node *save,*pre;
	int x;
	
	if(first==NULL){
		printf("Underflow...!\n");
		return 0;
	}else{
		save=pre=first;
		while(save->link!=NULL){
			pre=save;
			save=save->link;
		}
		pre->link=NULL;
		last=pre;
		x=save->info;
		free(save);
		return x;
	}
}


// Delete Specific :
int delete_specific(int val){
	struct node *save,*pre;
	int x;
	save=pre=first;
	if(first==NULL){
		printf("Underflow...!\n");
		return 0;
	}else if(first->link==NULL){
		if(val==first->info){
			first=NULL;
			free(save);
			return val;	
		}else{
			printf("Node Not found...!\n");
			return 0;
		}
	}else if(val==first->info)
	{
		first=first->link;
		free(save);
		return val;
	}
	else{
		
		while((save->link!=NULL) &&( val!=save->info)){
			pre=save;
			save=save->link;
		}
		pre->link=save->link;
		x=save->info;
		free(save);
		return x;
	}
}

// Insert First :
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

// Insert Last :
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

