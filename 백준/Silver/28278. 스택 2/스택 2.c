#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

typedef struct Stack
{
    Node *top;
    int size;

} Stack;

// 스택 쌓기 (1)
void push(Stack *stack, int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
}

// 스택 꺼내기 (2)
int pop(Stack *Stack)
{
    if (Stack->size == 0)
    {
        return -1;
    }

    Node *temp = Stack->top;
    int data = temp->data;
    Stack->top = temp->next;
    free(temp);
    Stack->size--;
    return data;
}

// 스택 맨 위 값 확인 (5)
int peek(Stack *stack)
{
    if (stack->size == 0)
    {
        return -1;
    }

    return stack->top->data;
}

// 스택 사이즈 확인 (3)
int count(Stack *stack)
{
    return stack->size;
}

// 스택이 비어있는지 확인 (4)
int isEmpty(Stack *stack)
{
    return stack->size == 0 ? 1 : 0;
}

int main()
{
    Stack stack;
    stack.top = NULL;
    stack.size = 0;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int command;
        scanf("%d", &command);

        if (command == 1)
        {
            int x;
            scanf("%d", &x);
            push(&stack, x);
        }
        else if (command == 2)
        {
            printf("%d\n", pop(&stack));
        }
        else if (command == 3)
        {
            printf("%d\n", count(&stack));
        }
        else if (command == 4)
        {
            printf("%d\n", isEmpty(&stack));
        }
        else if (command == 5)
        {
            printf("%d\n", peek(&stack));
        }
    }

    return 0;
}