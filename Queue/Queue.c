#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Queue.h"

bool isEmpty(Queue* queue)
{
    return (queue->front == 0);
}

void enqueue(Queue *queue, const int value)
{
    QueueElement* newElement = malloc(sizeof(QueueElement));
    createQueueElement(newElement, value);

    if ((queue->back == 0) || (queue->front == 0))
    {
        queue->back = newElement;
        queue->front = newElement;
    }
    else
    {
        queue->back->next = newElement;
        queue->back = newElement;
    }
}

int dequeue(Queue *queue)
{
	
}

void deleteQueue(Queue* queue)
{
    while (!isEmpty)
    {
        dequeue(queue);
    }
    free(queue);
}

void front()
{

}

void back()
{

}

void printQueue(Queue* queue)
{
    QueueElement* tmpElement = queue->front;
    while (tmpElement)
    {
        printf("%d ", tmpElement->value);
        tmpElement = tmpElement->next;
    }
}