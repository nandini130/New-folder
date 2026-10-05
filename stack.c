#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow! Stack is full.\n");
    else {
        stack[++top] = x;
        printf("%d pushed into stack.\n", x);
    }
}

void pop() {
    if (top == -1)
        printf("Stack Underflow! Stack is empty.\n");
    else
        printf("%d popped from stack.\n", stack[top--]);
}

void peek() {
    if (top == -1)
        printf("Stack is empty.\n");
    else
        printf("Top element is: %d\n", stack[top]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements are:\n");

    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}