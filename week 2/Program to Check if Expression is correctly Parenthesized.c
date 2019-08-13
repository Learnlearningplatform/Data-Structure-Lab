/*
 * C Program to Check if Expression is correctly Parenthesized
 Program Explanation
 1. Take a expression as input and store it in the array a[]. Initialize the variable top to -1.
 2. Using for loop check for the “(” and “)” in the expression.
 3. If “(” encounters, then push the character to the separate array stack[] and increment the variable top by 1. If “)” encounters, then pop the top most element of the array stack[] and decrement the variable top by 1. Use variable top to denote the top element of the array stack[].
 4. If the variable top is equal to -1, then the expression is correctly parenthesized. Otherwise it is not.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

// function prototypes
void push(char);
void pop();
void find_top();

void main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
}

// to push elements in stack
void push(char a)
{
	stack[top] = a;
	top++;
}

// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

// to find top element of stack
void find_top()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
