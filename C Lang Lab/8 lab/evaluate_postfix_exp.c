//8.1 evaluate postfix expression :

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluatePostfix(char postfix[]) {
    int i, operand1, operand2;

    for (i = 0; postfix[i] != '\0'; ++i) {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            push(postfix[i] - '0');
        } else {
            operand2 = pop();
            operand1 = pop();
            switch (postfix[i]) {
                case '+':
					printf("+Stack[%d,%d]\n",operand1,operand2);
                    push(operand1 + operand2);
                    break;
                case '-':
					printf("-Stack[%d,%d]\n",operand1,operand2);
                    push(operand1 - operand2);
                    break;
                case '*':
					printf("*Stack[%d,%d]\n",operand1,operand2);
                    push(operand1 * operand2);
                    break;
                case '/':
					printf("/Stack[%d,%d]\n",operand1,operand2);
                    push(operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", postfix[i]);
                    return -1;
            }
        }
    }

    return pop();
}

void main() {
    char postfix[MAX_SIZE];
	printf("Enter a Postfix Exp : ");
	scanf("%s",postfix);
    int result = evaluatePostfix(postfix);
    if (result != -1) {
        printf("Result of postfix expression: %d\n", result);
    }
}
