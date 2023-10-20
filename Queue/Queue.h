#pragma once

#include <stdbool.h>

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

bool isEmpty();

void enqueue(Queue* queue, const int value);

int dequeue(Queue* queue);

void deleteQueue();

void front();

void back();

void printQueue();
