#pragma once

typedef struct
{
	int value;
	QueueElement* next;
} QueueElement;

typedef struct
{
	QueueElement *front;
	QueueElement *back;
} Queue;

void enqueue();

void dequeue();

void isEmpty();

void deleteQueue();

void front();

void back();

void printQueue();
