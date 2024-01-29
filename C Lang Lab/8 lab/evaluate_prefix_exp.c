//8.2 evaluate prefix expression :

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

int evaluatePrefix(char prefix[]) {
    int i, operand1, operand2;

    for (i = 0; prefix[i] != '\0'; ++i) {
        if (prefix[i] >= '0' && prefix[i] <= '9') {
            push(prefix[i] - '0'); 
        } else {
            operand1 = pop();
            operand2 = pop();
            switch (prefix[i]) {
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
                    printf("Invalid operator: %c\n", prefix[i]);
                    return -1; 
            }
        }
    }
    return pop();
}

void main() {
    char prefix[MAX_SIZE];
	printf("Enter a Prefix Exp : ");
	scanf("%s",prefix);
    strrev(prefix);
    int result = evaluatePrefix(prefix);

    if (result != -1) {
        printf("Result of prefix expression: %d\n", result);
    }
}
