#include "Queue.h"
#include <stdio.h>

void enqueue()
{

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