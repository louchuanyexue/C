#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>
#define MAXQUEUE 10

typedef struct node
{
    int data;
    struct node* next;
}Node;

typedef struct queue
{
    Node* font;
    Node* rear;
    int nodes;
}Queue;

void InitializeQueue(Queue* pq);

bool QueueIsFull(const Queue * pq);

bool QueueIsEmpty(const Queue * pq);

int QueueItemCount(const Queue* pq);

bool EnQueue(int data,Queue *pq);

//bool DeQueue(Item *pitem,Queue *pq)

void EmptyTheQueue(Queue * pq);

#endif