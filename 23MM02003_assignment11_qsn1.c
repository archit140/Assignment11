#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char stack1) {
    if (top == 99) {
        printf("Stack is full\n");
        return;
    } else {
        top++;
        stack[top] = stack1;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack is underflowed\n");
        return '\0'; 
    } else {
        char popped = stack[top];
        top--;
        return popped;
    }
}

void reverse(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }
}

int main() {
    char string2[100];
    printf("Enter a string: ");
    gets(string2);
    reverse(string2);
    printf("Reversed string using a stack: %s\n", string2);
    return 0;
}
