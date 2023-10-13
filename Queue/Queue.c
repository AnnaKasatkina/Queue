#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int enqueue(Queue *queue, const int value)
{
    QueueElement* tail = malloc(sizeof(QueueElement));
    tail->value = value;
    tail->next = NULL;
    queue->back = tail;

    free(tail);
    return 0;
}

void dequeue()
{

}

void isEmpty()
{

}

void deleteQueue()
{

}

void front()
{

}

void back()
{

}

void printQueue()
{

}