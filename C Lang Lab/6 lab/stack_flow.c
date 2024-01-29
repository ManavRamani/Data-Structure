#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int value);
int pop();
int peep();
void change(int index, int value);
void display();

void main() {
    int choice,value,index;

    do {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Change\n");
        printf("5. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
		scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d",&value);
                push(value);
                printf("Value %d pushed onto the stack.\n", value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped value: %d\n", value);
                else
                    printf("Stack is empty. Cannot pop.\n");
                break;

            case 3:
                value = peep();
                if (value != -1)
                    printf("Top of the stack: %d\n", value);
                else
                    printf("Stack is empty. Cannot peep.\n");
                break;

            case 4:
                printf("Enter the index to change: ");
                scanf("%d", &index);
                printf("Enter the new value: ");
                scanf("%d", &value);
                change(index, value);
                printf("Value at index %d changed to %d.\n", index, value);
                break;

            case 5:
                display();
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);
}

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push.\n");
    } else {
        top++;
        stack[top] = value;
    }
}

int pop() {
    if (top == -1) {
        return -1; // Stack is empty
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

int peep() {
    if (top == -1) {
        return -1; // Stack is empty
    } else {
        return stack[top];
    }
}

void change(int index, int value) {
    if (index >= 0 && index <= top) {
        stack[index] = value;
    } else {
        printf("Invalid index. Cannot change value.\n");
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
