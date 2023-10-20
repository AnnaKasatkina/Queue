#include "Queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Queue* createQueue()
{
    Queue* queue = malloc(sizeof(Queue));
    queue->front = 0;
    queue->back = 0;
    return queue;
}

void createQueueElement(QueueElement* queueElement, const int value)
{
    queueElement->next = 0;
    queueElement->value = value;
}

bool isEmpty(Queue* queue)
{
    return (queue->front == 0);
}

void enqueue(Queue* queue, const int value)
{
    QueueElement* newElement = malloc(sizeof(QueueElement));
    createQueueElement(newElement, value);

    if ((queue->back == 0) && (queue->front == 0))
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

int dequeue(Queue* queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty!");
        exit(EXIT_FAILURE);
    }
    QueueElement* tmpElement = queue->front;
    queue->front = queue->front->next;
    int value = tmpElement->value;
    free(tmpElement);

    return value;
}

void deleteQueue(Queue* queue)
{
    while (!isEmpty)
    {
        dequeue(queue);
    }
    free(queue);
}

int front(Queue* queue)
{
    return queue->front->value;
}

int back(Queue* queue)
{
    return queue->back->value;
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