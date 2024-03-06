// 14.3 

#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first,*last;

void insert(int x);
int delete_element();
void display();

void main(){
	int ch,x;

	printf("Select from below choice:\n\n");
	
	printf("\n1.insert into Queue: ");
	printf("\n2.Delete into Queue: ");
	printf("\n3.Display: ");
	
	printf("\nEnter Choice :");
	scanf("%d",&ch);
	
	while(ch != -1){
		switch(ch){
			case 1:
				printf("\nEnter Element : ");
				scanf("%d",&x);
				insert(x);
				break;
				
			case 2:
				x = delete_element();
				printf("\nDeleted value : %d ",x);
				break;
			
			case 3:
				display();	
			
		}
		printf("\nEneter choice :");
		scanf("%d",&ch);
	}
}	

void display(){
	struct node * save = first;
	
	do{
		printf("%d ",save -> info);
		save = save -> link;
	}while(save != last);
	printf("%d ",save -> info);
}

void insert(int x){
	struct node *new_node = (struct node*)malloc(sizeof(struct node*));
	
	if(new_node == NULL){
		printf("Memory not allocated..");
	}
	else{
		new_node -> info = x;
		if(first == NULL){
			new_node -> link = new_node;
			first = last = new_node;
		}
		else{
			new_node -> link = first;
			last->link = new_node;
			last = new_node;
		}
	}
} 

int delete_element(){
	struct node *save;
	int x;
	
	if(first == NULL){
		printf("Queue Empty..");
		return 0;
	}
	else{
		if(first == last){
			save = first;
			x = save->info;
			first = last = NULL;
			free(save);
			return x;
		}
		else{
			save = first;
			first = first->link;
			last->link = first;
			x = save->info;
			free(save);
			return x;
		}
	}
}
