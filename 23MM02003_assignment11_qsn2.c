#include <stdio.h>
char stack[100];
int top = -1;
void push(char data)
{
    if (top == 99)
    {
        printf("Overflow");
        return;
    }
    top++;
    stack[top] = data;
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return;
    }
    top--;
    return;
}
void show(int i)
{
    printf("%c", stack[i]);
}
void main()
{
    int n;
    printf("Enter the length of the string ");
    scanf("%d", &n);
    char text[n];
    
    scanf("%s",text);
    for (int i = 0; i < n; i++)
    {
        if (top != -1)
        {
            if (stack[top] == text[i])
            {
                pop();
            }
            else
            {
                push(text[i]);
            }
        }
        else
        push(text[i]);
    }
    for (int i = 0; i < top+1; i++)
    {
        show(i);
    }
}