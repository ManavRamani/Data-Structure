#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed onto the stack\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from the stack\n", stack[top--]);
}

// Function to peek at the top element of the stack
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

// Function to change the value at the top of the stack
void change(int newValue) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    stack[top] = newValue;
    printf("Top element changed to %d\n", newValue);
}

// Function to traverse and display the elements of the stack
void traverse() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; ++i) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void main() {
    push(10);
    push(20);
    push(30);
    traverse();

    peek();
    change(25);
    traverse();

    pop();
    traverse();

}
