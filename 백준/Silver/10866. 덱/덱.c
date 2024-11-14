#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  int size;
} Deque;

void push_front(Deque *deque, int value);
void push_back(Deque *deque, int value);
int pop_front(Deque *deque);
int pop_back(Deque *deque);
int size(Deque *deque);
int empty(Deque *deque);
int front(Deque *deque);
int back(Deque *deque);

void push_front(Deque *deque, int value)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->prev = NULL;
  newNode->next = deque->front;

  if (deque->size == 0)
  {
    deque->front = newNode;
    deque->rear = newNode;
  }
  else
  {
    deque->front->prev = newNode;
    deque->front = newNode;
  }

  deque->size++;
}

void push_back(Deque *deque, int value)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;
  newNode->prev = deque->rear;

  if (deque->size == 0)
  {
    deque->front = newNode;
    deque->rear = newNode;
  }
  else
  {
    deque->rear->next = newNode;
    deque->rear = newNode;
  }

  deque->size++;
}

int pop_front(Deque *deque)
{
  if (deque->size == 0)
  {
    return -1;
  }

  Node *temp = deque->front;
  int value = temp->data;

  if (deque->size == 1)
  {
    deque->front = NULL;
    deque->rear = NULL;
  }
  else
  {
    deque->front = temp->next;
    deque->front->prev = NULL;
  }

  free(temp);
  deque->size--;
  return value;
}

int pop_back(Deque *deque)
{
  if (deque->size == 0)
  {
    return -1;
  }

  Node *temp = deque->rear;
  int value = temp->data;

  if (deque->size == 1)
  {
    deque->front = NULL;
    deque->rear = NULL;
  }
  else
  {
    deque->rear = temp->prev;
    deque->rear->next = NULL;
  }

  free(temp);
  deque->size--;
  return value;
}

int size(Deque *deque)
{
  return deque->size;
}

int empty(Deque *deque)
{
  return deque->size == 0 ? 1 : 0;
}

int front(Deque *deque)
{
  return deque->size == 0 ? -1 : deque->front->data;
}

int back(Deque *deque)
{
  return deque->size == 0 ? -1 : deque->rear->data;
}

int main()
{
  int n;
  scanf("%d", &n);

  Deque *deque = (Deque *)malloc(sizeof(Deque));
  deque->front = NULL;
  deque->rear = NULL;
  deque->size = 0;

  char command[20];

  for (int i = 0; i < n; i++)
  {
    scanf("%s", command);

    int commandType = 0;
    if (strcmp(command, "push_front") == 0)
      commandType = 1;
    else if (strcmp(command, "push_back") == 0)
      commandType = 2;
    else if (strcmp(command, "pop_front") == 0)
      commandType = 3;
    else if (strcmp(command, "pop_back") == 0)
      commandType = 4;
    else if (strcmp(command, "size") == 0)
      commandType = 5;
    else if (strcmp(command, "empty") == 0)
      commandType = 6;
    else if (strcmp(command, "front") == 0)
      commandType = 7;
    else if (strcmp(command, "back") == 0)
      commandType = 8;

    switch (commandType)
    {
    case 1:
    {
      int value;
      scanf("%d", &value);
      push_front(deque, value);
      break;
    }
    case 2:
    {
      int value;
      scanf("%d", &value);
      push_back(deque, value);
      break;
    }
    case 3:
      printf("%d\n", pop_front(deque));
      break;
    case 4:
      printf("%d\n", pop_back(deque));
      break;
    case 5:
      printf("%d\n", size(deque));
      break;
    case 6:
      printf("%d\n", empty(deque));
      break;
    case 7:
      printf("%d\n", front(deque));
      break;
    case 8:
      printf("%d\n", back(deque));
      break;
    }
  }

  free(deque);
  return 0;
}