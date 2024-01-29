// 2. Infix to prefix conversion :

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX_SIZE 100
// // Stack implementation
// int stack[MAX_SIZE];
// int top = -1;
// void push(int item) {
//     if (top == MAX_SIZE - 1) {
//         printf("Stack overflow\n");
//         exit(EXIT_FAILURE);
//     }
//     stack[++top] = item;
// }
// int pop() {
//     if (top == -1) {
//         printf("Stack underflow\n");
//         exit(EXIT_FAILURE);
//     }
//     return stack[top--];
// }
// int isOperator(char ch) {
//     return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
// }
// int precedence(char ch) {
//     switch (ch) {
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         default:
//             return 0;
//     }
// }
// void infixToPrefix(char infix[], char prefix[]) {
//     int i, j = 0;
//     int len = strlen(infix);
//     // Reverse the infix expression
//     for (i = len - 1; i >= 0; i--) {
//         if (infix[i] == '(')
//             infix[i] = ')';
//         else if (infix[i] == ')')
//             infix[i] = '(';
//     }
//     // Infix to Prefix conversion
//     for (i = 0; i < len; i++) {
//         if (infix[i] == ' ' || infix[i] == '\t')
//             continue;
//         else if (isalnum(infix[i]))
//             prefix[j++] = infix[i];
//         else if (infix[i] == ')') {
//             push(infix[i]);
//         } else if (infix[i] == '(') {
//             while (top != -1 && stack[top] != ')')
//                 prefix[j++] = pop();
//             if (top != -1)
//                 pop(); // Discard the ')'
//         } else {
//             while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
//                 prefix[j++] = pop();
//             push(infix[i]);
//         }
//     }
//     // Pop any remaining operators from the stack
//     while (top != -1)
//         prefix[j++] = pop();
//     // Reverse the result to get the final prefix expression
//     for (i = 0; i < j / 2; i++) {
//         char temp = prefix[i];
//         prefix[i] = prefix[j - i - 1];
//         prefix[j - i - 1] = temp;
//     }
//     // Null-terminate the prefix expression
//     prefix[j] = '\0';
// }
// int main() {
//     char infix[MAX_SIZE];
//     char prefix[MAX_SIZE];
//     printf("Enter an infix expression: ");
//     fgets(infix, MAX_SIZE, stdin);
//     infixToPrefix(infix, prefix);
//     printf("Prefix expression: %s\n", prefix);
//     return 0;
// }

// ------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Stack overflow\n");
		return;
	}else{
		stack[++top] = item;
	}
}

int pop()
{
	if (top == -1)
	{
		printf("Stack underflow\n");
		return -1;
	}else{
		return stack[top--];
	}
}

int isOperator(char ch)
{
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	default:
		return 0;
	}
}

void infixToPrefix(char infix[], char prefix[])
{
	int i, j = 0;
	int len = strlen(infix);

	// Reverse the infix expression
	for (i = len - 1; i >= 0; i--)
	{
		if (infix[i] == '(')
		{
			infix[i] = ')';
		}
		else if (infix[i] == ')')
		{
			infix[i] = '(';
		}
	}

	// Infix to Prefix conversion
	for (i = 0; i < len; i++)
	{
		if (infix[i] == ' ' || infix[i] == '\t')
		{
			continue;
		}
		else if (isalnum(infix[i]))
		{
			prefix[j++] = infix[i];
		}
		else if (infix[i] == ')')
		{
			push(infix[i]);
		}
		else if (infix[i] == '(')
		{
			while (top != -1 && stack[top] != ')')
				prefix[j++] = pop();
			if (top != -1)
				pop(); // Discard the ')'
		}
		else
		{
			while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
				prefix[j++] = pop();
			push(infix[i]);
		}
	}

	// Pop any remaining operators from the stack
	while (top != -1)
	{
		prefix[j++] = pop();
	}

	// Reverse the result to get the final prefix expression
	for (i = 0; i < j / 2; i++)
	{
		char temp = prefix[i];
		prefix[i] = prefix[j - i - 1];
		prefix[j - i - 1] = temp;
	}

	// Null-terminate the prefix expression
	prefix[j] = '\0';
}

void main()
{
	int i, j = 0;
	char infix[MAX_SIZE];
	char prefix[MAX_SIZE];

	printf("Enter an infix expression: ");
	gets(infix);
	int len = strlen(infix);

	// Reverse the infix expression
	for (i = len - 1; i >= 0; i--)
	{
		if (infix[i] == '(')
		{
			infix[i] = ')';
		}
		else if (infix[i] == ')')
		{
			infix[i] = '(';
		}
	}

	// Infix to Prefix conversion
	for (i = 0; i < len; i++)
	{
		if (infix[i] == ' ' || infix[i] == '\t')
		{
			continue;
		}
		else if (isalnum(infix[i]))
		{
			prefix[j++] = infix[i];
		}
		else if (infix[i] == ')')
		{
			push(infix[i]);
		}
		else if (infix[i] == '(')
		{
			while (top != -1 && stack[top] != ')')
				prefix[j++] = pop();
			if (top != -1)
			{
				pop(); // Discard the ')'
			}
		}
		else
		{
			while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
				prefix[j++] = pop();
			push(infix[i]);
		}
	}

	// Pop any remaining operators from the stack
	while (top != -1)
		prefix[j++] = pop();

	// Reverse the result to get the final prefix expression
	for (i = 0; i < j / 2; i++)
	{
		char temp = prefix[i];
		prefix[i] = prefix[j - i - 1];
		prefix[j - i - 1] = temp;
	}

	// Null-terminate the prefix expression
	prefix[j] = '\0';

	printf("Prefix expression: %s\n", prefix);
}
