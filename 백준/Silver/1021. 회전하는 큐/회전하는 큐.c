#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

typedef struct
{
  Node *front;
  Node *rear;
  int num;
} Deck;

// 덱 초기화
void InitDeck(Deck *d)
{
  d->front = NULL;
  d->rear = NULL;
  d->num = 0;
}

// 덱이 비었는지 확인
int IsEmpty(Deck *d)
{
  return d->num == 0;
}

// 덱의 앞에 원소 추가
void EnqueFront(Deck *d, int v)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = v;
  newNode->next = d->front;
  newNode->prev = NULL;

  if (IsEmpty(d))
  {
    d->rear = newNode;
  }
  else
  {
    d->front->prev = newNode;
  }

  d->front = newNode;
  d->num++;
}

// 덱의 뒤에 원소 추가
void EnqueRear(Deck *d, int v)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = v;
  newNode->next = NULL;
  newNode->prev = d->rear;

  if (IsEmpty(d))
  {
    d->front = newNode;
  }
  else
  {
    d->rear->next = newNode;
  }

  d->rear = newNode;
  d->num++;
}

// 덱의 앞에서 원소 제거
int DequeFront(Deck *d, int *v)
{
  if (IsEmpty(d))
  {
    return -1;
  }

  Node *temp = d->front;
  *v = temp->data;

  d->front = d->front->next;
  if (d->front == NULL)
  {
    d->rear = NULL;
  }
  else
  {
    d->front->prev = NULL;
  }

  free(temp);
  d->num--;
  return 0;
}

// 덱의 뒤에서 원소 제거
int DequeRear(Deck *d, int *v)
{
  if (IsEmpty(d))
  {
    return -1;
  }

  Node *temp = d->rear;
  *v = temp->data;

  d->rear = d->rear->prev;
  if (d->rear == NULL)
  {
    d->front = NULL;
  }
  else
  {
    d->rear->next = NULL;
  }

  free(temp);
  d->num--;
  return 0;
}

// 덱의 앞 원소 반환
int PeekFront(Deck *d, int *v)
{
  if (IsEmpty(d))
  {
    return -1;
  }

  *v = d->front->data;
  return 0;
}

// 덱의 뒤 원소 반환
int PeekRear(Deck *d, int *v)
{
  if (IsEmpty(d))
  {
    return -1;
  }

  *v = d->rear->data;
  return 0;
}

// 덱에서 값을 찾아서 해당 위치 반환
int FindSequence(Deck *d, int v)
{
  Node *current = d->front;
  int index = 0;

  while (current != NULL)
  {
    if (current->data == v)
    {
      return index;
    }
    current = current->next;
    index++;
  }
  return -1; // 실패
}

int main()
{
  Deck deck;
  int N, K;
  int temp;
  int COUNT = 0;

  // 덱 초기화
  InitDeck(&deck);

  // 입력 받기
  scanf("%d %d", &N, &K);

  // 덱에 1부터 N까지 넣기
  for (int i = 1; i <= N; i++)
  {
    EnqueRear(&deck, i);
  }

  // K번 반복하면서 특정 값 회전
  for (int i = 0; i < K; i++)
  {
    scanf("%d", &temp);

    int seq = FindSequence(&deck, temp);

    // 오른쪽 회전
    if (seq < deck.num - seq)
    {
      while (seq--)
      {
        DequeFront(&deck, &temp);
        EnqueRear(&deck, temp);
        COUNT++;
      }
    }
    // 왼쪽 회전
    else
    {
      seq = deck.num - seq;
      while (seq--)
      {
        DequeRear(&deck, &temp);
        EnqueFront(&deck, temp);
        COUNT++;
      }
    }

    // 해당 원소 제거
    DequeFront(&deck, &temp);
  }

  // 결과 출력
  printf("%d\n", COUNT);

  return 0;
}