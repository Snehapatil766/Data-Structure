#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

void push() {
    int x;
    if (isFull())
        printf("Stack Overflow! Cannot push.\n");
    else {
        printf("Enter element to push: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
        printf("%d pushed into stack.\n", x);
    }
}

void pop() {
    if (isEmpty())
        printf("Stack Underflow! Cannot pop.\n");
    else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void peek() {
    if (isEmpty())
        printf("Stack is empty. No top element.\n");
    else
        printf("Top element is: %d\n", stack[top]);
}

void display() {
    int i;
    if (isEmpty())
        printf("Stack is empty.\n");
    else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check isFull\n");
        printf("5. Check isEmpty\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4:
                if (isFull())
                    printf("Stack is Full.\n");
                else
                    printf("Stack is NOT Full.\n");
                break;
            case 5:
                if (isEmpty())
                    printf("Stack is Empty.\n");
                else
                    printf("Stack is NOT Empty.\n");
                break;
            case 6: display(); break;
            case 7: printf("Exiting program...\n"); 
			break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}
