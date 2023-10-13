#pragma once

typedef struct QueueElement
{
	int value;
	struct QueueElement* next;
} QueueElement;

typedef struct Queue
{
	struct QueueElement *front;
	struct QueueElement *back;
} Queue;

int enqueue(Queue* queue, const int value);

int dequeue(Queue* queue);

void isEmpty();

void deleteQueue();

void front();

void back();

void printQueue();
