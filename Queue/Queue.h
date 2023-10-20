#pragma once

#include <stdbool.h>

typedef struct QueueElement
{
	int value;
	struct QueueElement* next;
} QueueElement;

typedef struct Queue
{
	struct QueueElement* front;
	struct QueueElement* back;
} Queue;

void createQueue(Queue* queue);

void createQueueElement(QueueElement* queueElement, const int value);

bool isEmpty(Queue* queue);

void enqueue(Queue* queue, const int value);

int dequeue(Queue* queue);

void deleteQueue(Queue* queue);

int front(Queue* queue);

int back(Queue* queue);

void printQueue(Queue* queue);
