#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Define the stack structure
struct Stack {
    int top;
    char items[MAX_SIZE];
};

// Function to initialize an empty stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

// Function to push a character onto the stack
void push(struct Stack *stack, char c) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = c;
}

// Function to pop a character from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

// Function to reverse a string using a stack
void reverseString(char str[]) {
    // Create a stack
    struct Stack stack;
    initialize(&stack);

    // Push each character onto the stack
    for (int i = 0; i < strlen(str); i++) {
        push(&stack, str[i]);
    }

    // Pop each character from the stack to reverse the string
    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop(&stack);
    }
}

void main() {
    char inputString[MAX_SIZE];

    // Get input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    // Reverse the string using the stack
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

}
