// 1. Infix to postfix conversion :

#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;

void push(char);
char pop();
int priority(char);

void main()
{
	char exp[100], ch, postfix[100];
	int i = 0, j = 0, x;

	printf("Enter Infix Expresion : ");
	scanf("%s", exp);

	strcat(exp, ")");
	push('(');

	while (exp[i] != '\0')
	{
		ch = exp[i];
		if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) || ((ch >= '0') && (ch <= '9')))
		{
			postfix[j++] = ch;
		}
		else if (ch == '(')
		{
			push(ch);
		}
		else if (ch == ')')
		{
			x = pop();
			while (x != '(')
			{
				postfix[j++] = x;
				x = pop();
			}
		}
		else
		{
			while (priority(stack[top]) >= priority(ch))
			{
				x = pop();
				postfix[j++] = x;
			}
			push(ch);
		}
		i++;
	}
	postfix[i] = '\0';
	printf("Postfix Exp : %s", postfix);
}

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	return stack[top--];
}

int priority(char x)
{
	if (x == '(')
	{
		return 0;
	}
	else if (x == '+' || x == '-')
	{
		return 1;
	}
	else if (x == '*' || x == '/' || x == '%')
	{
		return 2;
	}
	else if (x == '^')
	{
		return 3;
	}
	else
	{
		return -1;
	}
}