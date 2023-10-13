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

int dequeue(Queue *queue)
{
	QueueElement* element = queue->front;
	int value = queue->front->value;

	queue->front = queue->front->next;
	free(element);

	return value;
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