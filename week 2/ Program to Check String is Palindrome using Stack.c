/*
 * C Program to Identify whether the String is Palindrome or not using Stack
 Program Explanation
1. Take a string as input and store it in the array s[].
2. Load each character of the array s[] into the array stack[].
3. Use variables front and top to represent the last and top element of the array stack[].
4. Using for loop compare the top and last element of the array stack[]. If they are equal, then delete the top element, increment the variable front by 1 and compare again.
5. If they are not equal, then print the output as “It is not a palindrome”.
6. Compare the elements in the steps 4-5 upto the middle element of the array stack[].
7. If every characters of the array is equal, then it is a paliandrome.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();

void main()
{
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("1-enter string\n2-exit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the String\n");
            scanf("%s", s);
            for (i = 0;s[i] != '\0';i++)
            {
                b = s[i];
                push(b);
            }
            for (i = 0;i < (strlen(s) / 2);i++)
            {
                if (stack[top] == stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("%s is not a palindrome\n", s);
                    break;
                }
            }
            if ((strlen(s) / 2)  =  =  front)
                printf("%s is palindrome\n",  s);
            front  =  0;
            top  =  -1;
            break;
        case 2:
            exit(0);
        default:
            printf("enter correct choice\n");
        }
    }
}

/* to push a character into stack */
void push(char a)
{
    top++;
    stack[top]  =  a;
}

/* to delete an element in stack */
void pop()
{
    top--;
}
