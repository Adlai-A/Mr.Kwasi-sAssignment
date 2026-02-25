#include <stdio.h>

#define MAX 10

// Stack structure
struct Stack {
    int data[MAX];
    int top;
};

// Initialize stack
void init(struct Stack *s) {
    s->top = -1;
}

// push()
void push(struct Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// pop()
void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    s->top--;
}

// top()
int topElement(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
}

// empty()
int empty(struct Stack *s) {
    return (s->top == -1);
}

// size()
int size(struct Stack *s) {
    return s->top + 1;
}

int main() {
    struct Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", topElement(&s));
    printf("Size: %d\n", size(&s));

    pop(&s);

    printf("Top after pop: %d\n", topElement(&s));

    return 0;
}