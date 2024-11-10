#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct Queue
{
    Node *front;
    Node *rear;
    int count;
} Queue;

void push(Queue *q, int data); // 정수 x 를 큐에 넣는 연산
int pop(Queue *q);             // 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력
int size(Queue *q);            // 큐에 들어있는 정수의 개수 출력
int empty(Queue *q);           // 큐가 비어 있으면 1, 아니면 0 출력
int front(Queue *q);           // 큐의 가장 앞에 있는 정수 출력
int back(Queue *q);            // 큐의 가장 뒤에 있는 정수 출력

void push(Queue *q, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node)); // 새로운 노드 생성
    newNode->data = data;                         // 새로운 노드에 데이터 저장
    newNode->next = NULL;                         // 새로운 노드의 next를 NULL 설정

    // 만약에 큐가 비어 있다면
    if (q->rear == NULL)
    {
        q->front = newNode; // front에 새로운 노드 저장
        q->rear = newNode;  // rear에 새로운 노드 저장
    }
    else // 큐가 비어 있지 않다면
    {
        q->rear->next = newNode; // rear의 next에 새로운 노드 저장
        q->rear = newNode;       // rear에 새로운 노드 저장
    }
    q->count++; // 큐의 개수 증가
}

int pop(Queue *q)
{
    // 만약에 큐가 비어 있다면
    if (q->count == 0)
    {
        return -1; // -1 반환
    }

    Node *temp = q->front; // temp에 front 저장
    int data = temp->data; // data에 temp의 data 저장

    q->front = q->front->next; // front에 front의 next 저장

    // 만약에 front가 NULL이라면
    if (q->front == NULL)
    {
        q->rear = NULL; // rear에 NULL 저장
    }

    free(temp);  // temp 메모리 해제
    q->count--;  // 큐의 개수 감소
    return data; // data 반환
}

int size(Queue *q)
{
    return q->count; // 큐의 개수 반환
}

int empty(Queue *q)
{
    return q->count == 0 ? 1 : 0; // 큐가 비어 있다면 1, 아니면 0 반환
}

int front(Queue *q)
{
    // 만약에 큐가 비어 있다면
    if (q->count == 0)
    {
        return -1; // -1 반환
    }

    return q->front->data; // front의 data 반환
}

int back(Queue *q)
{
    // 만약에 큐가 비어 있다면
    if (q->count == 0)
    {
        return -1; // -1 반환
    }

    return q->rear->data; // rear의 data 반환
}

int main()
{
    Queue q;
    q.front = NULL;
    q.rear = NULL;
    q.count = 0;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char command[10];     // 명령을 입력받을 배열
        scanf("%s", command); // 명령 입력

        if (strcmp(command, "push") == 0) // "push" 명령 처리
        {
            int x;
            scanf("%d", &x); // x 입력
            push(&q, x);     // 큐에 x를 삽입
        }
        else if (strcmp(command, "pop") == 0) // "pop" 명령 처리
        {
            printf("%d\n", pop(&q)); // 큐에서 데이터를 꺼내고 출력
        }
        else if (strcmp(command, "size") == 0) // "size" 명령 처리
        {
            printf("%d\n", size(&q)); // 큐의 크기 출력
        }
        else if (strcmp(command, "empty") == 0) // "empty" 명령 처리
        {
            printf("%d\n", empty(&q)); // 큐가 비어 있으면 1, 아니면 0 출력
        }
        else if (strcmp(command, "front") == 0) // "front" 명령 처리
        {
            printf("%d\n", front(&q)); // 큐의 앞 데이터를 출력
        }
        else if (strcmp(command, "back") == 0) // "back" 명령 처리
        {
            printf("%d\n", back(&q)); // 큐의 뒤 데이터를 출력
        }
    }

    return 0;
}