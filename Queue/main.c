#include "Queue.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
	Queue* queue = createQueue();
	enqueue(queue, 7);
	enqueue(queue, 8);
	enqueue(queue, 9);
	enqueue(queue, 74);
	enqueue(queue, 77);

	dequeue(queue);

	printQueue(queue);

	return 0;
}
