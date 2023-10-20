#pragma once

#include <stdbool.h>

typedef struct Queue Queue;

typedef struct QueueElement QueueElement;

Queue* createQueue();

void createQueueElement(QueueElement* queueElement, const int value);

bool isEmpty(Queue* queue);

void enqueue(Queue* queue, const int value);

int dequeue(Queue* queue);

void deleteQueue(Queue* queue);

int front(Queue* queue);

int back(Queue* queue);

void printQueue(Queue* queue);