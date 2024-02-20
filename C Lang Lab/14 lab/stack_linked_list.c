/*
	14.1 Write a program to implement stack using linked list in c language.
*/

#include <stdio.h>
#include <stdlib.h>
int count = 0;

struct node {
    int info;
    struct node *ptr;
}*top,*top1,*temp;

// functions ........
void push(int);
int pop();
void display();

// main 
void main() {
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
        	printf("\nThank for Visit..!\n");
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}

// push function
void push(int data) {
     if (top == NULL){
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }else{
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
    printf("Node is Inserted\n\n");
}

// pop function
int pop() {
    top1 = top;
    if (top1 == NULL){
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->info;
    free(top);
    top = top1;
    count--;
    return popped;
}

// display function
void display() {
    top1 = top;
    if (top1 == NULL){
        printf("\nStack Underflow\n");
        return;
    }
    printf("The stack is \n");
    while (top1 != NULL){
        printf("%d--->", top1->info);
        top1 = top1->ptr;
    }
    printf("NULL\n\n");
}




