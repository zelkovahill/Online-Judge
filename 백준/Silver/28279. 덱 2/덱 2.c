#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *prev;
  struct Node *next;
} Node;

typedef struct Deque
{
  Node *front;
  Node *rear;
  int count;
} Deque;

void initDeque(Deque *deque)
{
  deque->front = NULL;
  deque->rear = NULL;
  deque->count = 0;
}

void push_front(Deque *deque, int value)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->prev = NULL;
  newNode->next = deque->front;

  if (deque->count == 0)
  {
    deque->front = newNode;
    deque->rear = newNode;
  }
  else
  {
    deque->front->prev = newNode;
    deque->front = newNode;
  }

  deque->count++;
}

void push_back(Deque *deque, int value)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;
  newNode->prev = deque->rear;

  if (deque->count == 0)
  {
    deque->front = newNode;
    deque->rear = newNode;
  }
  else
  {
    deque->rear->next = newNode;
    deque->rear = newNode;
  }

  deque->count++;
}

int pop_front(Deque *deque)
{
  if (deque->count == 0)
  {
    return -1;
  }

  Node *temp = deque->front;
  int value = temp->data;

  if (deque->count == 1)
  {
    deque->front = NULL;
    deque->rear = NULL;
  }
  else
  {
    deque->front = deque->front->next;
    deque->front->prev = NULL;
  }

  free(temp);
  deque->count--;
  return value;
}

int pop_back(Deque *deque)
{
  if (deque->count == 0)
  {
    return -1;
  }

  Node *temp = deque->rear;
  int value = temp->data;

  if (deque->count == 1)
  {
    deque->front = NULL;
    deque->rear = NULL;
  }
  else
  {
    deque->rear = deque->rear->prev;
    deque->rear->next = NULL;
  }

  free(temp);
  deque->count--;
  return value;
}

int size(Deque *deque)
{
  return deque->count;
}

int empty(Deque *deque)
{
  return deque->count == 0 ? 1 : 0;
}

int front(Deque *deque)
{
  return deque->count == 0 ? -1 : deque->front->data;
}

int back(Deque *deque)
{
  return deque->count == 0 ? -1 : deque->rear->data;
}

void freeDeque(Deque *deque)
{
  Node *current = deque->front;

  for (; current != NULL;)
  {
    Node *nextNode = current->next;
    free(current);
    current = nextNode;
  }
  deque->front = NULL;
  deque->rear = NULL;
  deque->count = 0;
}

int main()
{
  int n;
  scanf("%d", &n);

  Deque deque;
  initDeque(&deque);

  int command;
  int value;

  for (int i = 0; i < n; i++)
  {

    scanf("%d", &command);

    switch (command)
    {
    case 1:

      scanf("%d", &value);
      push_front(&deque, value);
      break;
    case 2:

      scanf("%d", &value);
      push_back(&deque, value);
      break;
    case 3:
      printf("%d\n", pop_front(&deque));
      break;
    case 4:
      printf("%d\n", pop_back(&deque));
      break;
    case 5:
      printf("%d\n", size(&deque));
      break;
    case 6:
      printf("%d\n", empty(&deque));
      break;
    case 7:
      printf("%d\n", front(&deque));
      break;
    case 8:
      printf("%d\n", back(&deque));
      break;
    default:
      printf("잘못된 명령입니다.\n");
      break;
    }
  }

  freeDeque(&deque);
  return 0;
}