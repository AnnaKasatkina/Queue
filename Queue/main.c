#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    QueueElement* element = malloc(sizeof(QueueElement));
    element->value = 0;
    element->next = NULL;
    Queue* queue = malloc(sizeof(Queue));
    queue->back = element;
    queue->front = element;
    enqueue(queue, 5);
    printf("%d", queue->front);
}