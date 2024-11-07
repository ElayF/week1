#include "Queue.h"

Queue* initQueue(unsigned int size)
{
	int i = 0;
	Queue* q = new Queue[size];
	q->elements = new int[size];
	q->maxSize = size;
	q->count = 0;
	
	return q;
}

void cleanQueue(Queue* q)
{
	delete[] q;
	q = NULL;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->elements[q->count] = newValue;
	q->count++;
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int value = q->elements[q->count];
	q->elements[q->count] = NULL;
	q->count--;
	
	return value;
}

bool isEmpty(Queue* s)
{
	return NULL == s->elements[0];
}

bool isFull(Queue* s)
{
	return NULL != s->elements[s->maxSize];
}